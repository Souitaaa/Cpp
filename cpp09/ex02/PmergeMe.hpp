#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <string>
#include <utility>

class PmergeMe
{
public:

    static void mergeSort(std::vector<std::pair<int, int> >& array);
    static void merge(std::vector<std::pair<int, int> >& leftarray, 
                      std::vector<std::pair<int, int> >& rightarray,                       
                      std::vector<std::pair<int, int> >& array);

};

#endif  