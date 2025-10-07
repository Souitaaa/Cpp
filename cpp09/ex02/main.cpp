#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <string>
#include <utility>
#include <algorithm>


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
    return js;
}

int main(int ac, char *av[])
{
    int vleftover = 0;
    int dleftover = 0;
    std::vector<int> v;
    std::deque<int> d;
    std::vector<int> longer;
    std::vector<int> smaller;
    std::vector<std::pair<int, int> > vpair;
    std::deque<std::pair<int, int> > dpair;
    PmergeMe p;

    if(p.chekArgs(ac, av, v, d))
        return 1;
    
    p.checkLeftover(v, d, vleftover, dleftover);
    p.fillAndSortPairs(v, d, vpair, dpair);
    p.mergeSort(vpair);
    
    for(int i = 0; i < (int)vpair.size(); i++)
    {
        longer.push_back(vpair[i].first);
        smaller.push_back(vpair[i].second);
    }

    if(!smaller.empty()) // Insert first smaller at the beginning
        longer.insert(longer.begin(), smaller[0]);

    std::vector<int> js = Jacobsthal(smaller.size()); // Generate Jacobsthal sequence
    
    
    if(js.size() > 2) // Remove 0 and 1
    {
        if(js.size() > 0 && js[0] == 0)
            js.erase(js.begin());
        if(js.size() > 0 && js[0] == 1)
            js.erase(js.begin());
    }
    
    
    int start = 0;
    int end = 1; // Start from 1 because we already inserted smaller[0]
    
    for (size_t i = 0; i < js.size(); i++) // Insert remaining smaller using Jacobsthal sequence
    {
        start = js[i];
        for (; start > end; start--)
        {
            int idx = start - 1;
            if (idx >= 0 && static_cast<size_t>(idx) < smaller.size())
            {
                std::vector<int>::iterator it = std::lower_bound(longer.begin(), longer.end(), smaller[idx]);
                longer.insert(it, smaller[idx]);
            }
        }
        end = js[i];
    }
    
    for (size_t i = end; i < smaller.size(); i++)
    {
        std::vector<int>::iterator it = std::lower_bound(longer.begin(), longer.end(), smaller[i]);
        longer.insert(it, smaller[i]);
    }
    
    if(p.getHasLeftover())
    {

        std::vector<int>::iterator it = std::lower_bound(longer.begin(), longer.end(), vleftover);
        longer.insert(it, vleftover);
    }
    
    std::cout << "\n\nFinal sorted sequence: ";
    for(int i = 0; i < (int)longer.size(); i++)
    {
        std::cout << longer[i] << " ";
    }
    std::cout << std::endl;
    if(p.getHasLeftover())
        std::cout << "Leftover element: " << vleftover << std::endl;
    
    return 0;
}
