#include "PmergeMe.hpp"


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
        // Compare based on the first element (larger element) of each pair
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