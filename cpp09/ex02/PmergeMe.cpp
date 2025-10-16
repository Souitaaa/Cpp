#include "PmergeMe.hpp"

PmergeMe::PmergeMe(): _hasLeftover(0) {}
PmergeMe::~PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe &other) { *this = other; }
PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    if (this != &other)
        this->_hasLeftover = other._hasLeftover;
    return *this;
}
void PmergeMe::setHasLeftover(int hasLeftover)
{
    this->_hasLeftover = hasLeftover;
}

int PmergeMe::getHasLeftover() const
{
    return this->_hasLeftover;
}
int PmergeMe::getLeftover() const
{
    return this->leftover;
}

void PmergeMe::mergeSort(std::vector<std::pair<int, int> >& array)
{
    int length = array.size();
    if(length <= 1)
        return;
    
    int mid = length / 2;
    std::vector<std::pair<int, int> > leftarray(array.begin(), array.begin() + mid);
    std::vector<std::pair<int, int> > rightarray(array.begin() + mid, array.end());

    mergeSort(leftarray);
    mergeSort(rightarray);
    merge(leftarray, rightarray, array);
}

void PmergeMe::merge(std::vector<std::pair<int, int> >& leftarray, 
                std::vector<std::pair<int, int> >& rightarray, 
                std::vector<std::pair<int, int> >& array)
{
    int leftsize = leftarray.size();
    int rightsize = rightarray.size();
    int i = 0, l = 0, r = 0;

    while(l < leftsize && r < rightsize)
    {
        if(leftarray[l].first < rightarray[r].first)
            array[i++] = leftarray[l++];
        else
            array[i++] = rightarray[r++];
    }
    while(l < leftsize)
        array[i++] = leftarray[l++];
    while(r < rightsize)
        array[i++] = rightarray[r++];
}

void PmergeMe::mergeSort(std::deque<std::pair<int, int> >& array)
{
    int length = array.size();
    if(length <= 1)
        return;
    
    int mid = length / 2;
    std::deque<std::pair<int, int> > leftarray(array.begin(), array.begin() + mid);
    std::deque<std::pair<int, int> > rightarray(array.begin() + mid, array.end());

    mergeSort(leftarray);
    mergeSort(rightarray);
    merge(leftarray, rightarray, array);
}

void PmergeMe::merge(std::deque<std::pair<int, int> >& leftarray, 
                std::deque<std::pair<int, int> >& rightarray, 
                std::deque<std::pair<int, int> >& array)
{
    int leftsize = leftarray.size();
    int rightsize = rightarray.size();
    int i = 0, l = 0, r = 0;

    while(l < leftsize && r < rightsize)
    {
        if(leftarray[l].first < rightarray[r].first)
            array[i++] = leftarray[l++];
        else
            array[i++] = rightarray[r++];
    }
    while(l < leftsize)
        array[i++] = leftarray[l++];
    while(r < rightsize)
        array[i++] = rightarray[r++];
}

int PmergeMe::chekArgs(int ac, char *av[], std::vector<int> &v, std::deque<int> &d)
{
    long i ;
    char c;
    if(ac < 2)
    {
        std::cout << "Error : entrer args" << std::endl;
        return 1;
    }
    
    for(int j = 1; j < ac ; j++) // parsing args
    {
        std::stringstream ss(av[j]);
        if (!(ss >> i))
        {
            std::cout << "Error" << std::endl;
            return 1;
        }
        if (ss >> c)
        {
            std::cout << "still" << std::endl;
            return 1;
        }
        if(i < 0 || i > 2147483647)
        {
            std::cout << "Error" << std::endl;
            return 1;
        }
        v.push_back(i);
        d.push_back(i);
    }
    return 0;
}

void PmergeMe::checkLeftover(std::vector<int> &v, std::deque<int> &d)
{
    PmergeMe p;
    if (v.size() % 2 != 0)
    {
        this->setHasLeftover(1);
        this->leftover = v.back();
        v.pop_back();
        d.pop_back();
    }
}

void PmergeMe::fillAndSortPairs(std::vector<int> &v, std::deque<int> &d, std::vector<std::pair<int, int> > &vpair, std::deque<std::pair<int, int> > &dpair)
{
    for(int i = 0 ; i < (int)v.size(); i += 2) // filling pair vectors and deques
    {
        vpair.push_back(std::make_pair(v[i], v[i + 1]));
        dpair.push_back(std::make_pair(d[i], d[i + 1]));
    }
    for(int i = 0 ; i < (int)vpair.size(); i++) // sort each pair internally
    {
        if(vpair[i].first < vpair[i].second)
        {
            std::swap(vpair[i].first, vpair[i].second);
        }
    }
    
    for(int i = 0 ; i < (int)dpair.size(); i++) // sort each deque pair internally (biggest on the left)
    {
        if(dpair[i].first < dpair[i].second)
        {
            std::swap(dpair[i].first, dpair[i].second);
        }
    }

    for(int i = 0 ; i < (int)vpair.size(); i++) // print vector pairs
    {
        std::cout << "(" << vpair[i].first << ", " << vpair[i].second << ") ";
    }
}

void PmergeMe::separatePairs(std::vector<std::pair<int, int> > &vpair, std::deque<std::pair<int, int> > &dpair, std::vector<int> &vlonger, std::vector<int> &vsmaller, std::deque<int> &dlonger, std::deque<int> &dsmaller)
{
    for(int i = 0; i < (int)vpair.size(); i++)
    {
        vlonger.push_back(vpair[i].first);
        vsmaller.push_back(vpair[i].second);
    }

    for(int i = 0; i < (int)dpair.size(); i++)
    {
        dlonger.push_back(dpair[i].first);
        dsmaller.push_back(dpair[i].second);
    }
    if(!vsmaller.empty()) // Insert first vsmaller at the beginning
    {
        vlonger.insert(vlonger.begin(), vsmaller[0]);
        dlonger.insert(dlonger.begin(), dsmaller[0]);
    }
}

void PmergeMe::binaryInsert(std::vector<int> &vsmaller, std::vector<int> &vlonger, std::deque<int> &dsmaller, std::deque<int> &dlonger, int start)
{
    for (size_t i = start; i < vsmaller.size(); i++)
    {
        std::vector<int>::iterator it = std::lower_bound(vlonger.begin(), vlonger.end(), vsmaller[i]);
        vlonger.insert(it, vsmaller[i]);
        std::deque<int>::iterator dit = std::lower_bound(dlonger.begin(), dlonger.end(), dsmaller[i]);
        dlonger.insert(dit, dsmaller[i]);
    }
    
    if(this->getHasLeftover())
    {
        std::vector<int>::iterator it = std::lower_bound(vlonger.begin(), vlonger.end(), this->getLeftover());
        vlonger.insert(it, this->getLeftover());
        std::deque<int>::iterator dit = std::lower_bound(dlonger.begin(), dlonger.end(), this->getLeftover());
        dlonger.insert(dit, this->getLeftover());
    }
}
