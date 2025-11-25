#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <string>
#include <utility>
#include <algorithm>
#include <ctime>
#include <iomanip>

std::vector<int> Jacobsthal(size_t n)
{
    std::vector<int> js;
    if (n == 0)
        return js;
    js.push_back(0);
    if (n == 1)
        return js;
    js.push_back(1);
    while (!0)
    {
        int next = js[js.size() - 1] + 2 * js[js.size() - 2];
        if (static_cast<size_t>(next) >= n)
            break;
        js.push_back(next);
    }
    return js;  // TODO 
}

void printSequence(const std::vector<int>& v, bool showAll)
{
    size_t limit = showAll ? v.size() : std::min(v.size(), size_t(5));
    
    for (size_t i = 0; i < limit; i++)
    {
        std::cout << v[i];
        if (i < limit - 1)
            std::cout << " ";
    }
    
    if (!showAll && v.size() > 5)
        std::cout << " [...]";
}

int main(int ac, char *av[])
{
    std::vector<int> v;
    std::deque<int> d;
    std::vector<int> vlonger;
    std::vector<int> vsmaller;
    std::deque<int> dlonger;
    std::deque<int> dsmaller;
    std::vector<std::pair<int, int> > vpair;
    std::deque<std::pair<int, int> > dpair;
    PmergeMe p;

    if(p.chekArgs(ac, av, v, d))
        return 1;
    
    std::cout << "Before: ";
    printSequence(v, v.size() <= 5);
    std::cout << std::endl;
    
    size_t originalSize = v.size();
    clock_t startVector = clock();
    
    
    p.checkLeftover(v, d);
    p.fillAndSortPairs(v, d, vpair, dpair);
    p.mergeSort(vpair);
    p.separatePairs(vpair, dpair, vlonger, vsmaller, dlonger, dsmaller);
    
    std::vector<int> js = Jacobsthal(vsmaller.size());
    
    if(js.size() > 2)
    {
        if(js.size() > 0 && js[0] == 0)
        js.erase(js.begin());
        if(js.size() > 0 && js[0] == 1)
        js.erase(js.begin());
    }
    
    int start = 0;
    int end = 1;
    
    for (size_t i = 0; i < js.size(); i++)
    {
        start = js[i];
        for (; start > end; start--)
        {
            int idx = start - 1;
            if (idx >= 0 && static_cast<size_t>(idx) < vsmaller.size())
            {
                std::vector<int>::iterator it = std::lower_bound(vlonger.begin(), vlonger.end(), vsmaller[idx]);
                vlonger.insert(it, vsmaller[idx]);
            }
        }
        end = js[i];
    }
    
    p.binaryInsert(vsmaller, vlonger, dsmaller, dlonger, end);
    
    clock_t endVector = clock();
    double vectorTime = (double)(endVector - startVector) / CLOCKS_PER_SEC * 1000000;
    
    clock_t startDeque = clock();
    
    p.mergeSort(dpair);
    
    for (size_t i = 0; i < js.size(); i++)
    {
        start = js[i];
        for (; start > end; start--)
        {
            int idx = start - 1;
            if (idx >= 0 && static_cast<size_t>(idx) < dsmaller.size())
            {
                std::deque<int>::iterator dit = std::lower_bound(dlonger.begin(), dlonger.end(), dsmaller[idx]);
                dlonger.insert(dit, dsmaller[idx]);
            }
        }
        end = js[i];
    }
    
    clock_t endDeque = clock();
    double dequeTime = (double)(endDeque - startDeque) / CLOCKS_PER_SEC * 1000000;
    
    std::cout << "After: ";
    printSequence(vlonger, vlonger.size() <= 5);
    std::cout << std::endl;
    
    std::cout << std::fixed << std::setprecision(5);
    std::cout << "Time to process a range of " << originalSize 
              << " elements with std::vector : " << vectorTime << " us" << std::endl;
    std::cout << "Time to process a range of " << originalSize 
              << " elements with std::deque : " << dequeTime << " us" << std::endl;

    return 0;
}