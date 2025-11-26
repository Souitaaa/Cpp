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
        int vleftover;
        int dleftover;
    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe &other);
        PmergeMe &operator=(const PmergeMe &other);
        void setHasLeftover(int hasLeftover);
        int getHasLeftover() const;
        int getVLeftover() const;
        int getDLeftover() const;
        void mergeSort(std::vector<std::pair<int, int> >& array);
        void merge(std::vector<std::pair<int, int> >& leftarray, 
                        std::vector<std::pair<int, int> >& rightarray,                       
                        std::vector<std::pair<int, int> >& array);
        void mergeSort(std::deque<std::pair<int, int> >& array);
        void merge(std::deque<std::pair<int, int> >& leftarray, 
                        std::deque<std::pair<int, int> >& rightarray,                       
                        std::deque<std::pair<int, int> >& array);
        int chekArgs(int ac, char *av[], std::vector<int> &v, std::deque<int> &d);
        void checkVectorLeftover(std::vector<int> &v);
        void checkDequeLeftover(std::deque<int> &d);
        void fillAndSortVectorsPairs(std::vector<int> &v, std::vector<std::pair<int, int> > &vpair);
        void fillAndSortDequePairs(std::deque<int> &d, std::deque<std::pair<int, int> > &dpair);
        void separateVectorsPairs(std::vector<std::pair<int, int> > &vpair, std::vector<int> &vlonger, std::vector<int> &vsmaller);
        void separateDequePairs(std::deque<std::pair<int, int> > &dpair, std::deque<int> &dlonger, std::deque<int> &dsmaller);
        void binaryVectorsInsert(std::vector<int> &vsmaller, std::vector<int> &vlonger, int start);
        void binaryDequeInsert(std::deque<int> &dsmaller, std::deque<int> &dlonger, int start);
};

#endif  