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
    private:
        int _hasLeftover;
    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe &other);
        PmergeMe &operator=(const PmergeMe &other);
        void setHasLeftover(int hasLeftover);
        int getHasLeftover() const;
        void mergeSort(std::vector<std::pair<int, int> >& array);
        void merge(std::vector<std::pair<int, int> >& leftarray, 
                        std::vector<std::pair<int, int> >& rightarray,                       
                        std::vector<std::pair<int, int> >& array);
        int chekArgs(int ac, char *av[], std::vector<int> &v, std::deque<int> &d);
        void checkLeftover(std::vector<int> &v, std::deque<int> &d, int &vleftover, int &dleftover);
        void fillAndSortPairs(std::vector<int> &v, std::deque<int> &d, std::vector<std::pair<int, int> > &vpair, std::deque<std::pair<int, int> > &dpair);
};

#endif  