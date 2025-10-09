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
    std::vector<int> vlonger;
    std::vector<int> vsmaller;
    std::deque<int> dlonger;
    std::deque<int> dsmaller;
    std::vector<std::pair<int, int> > vpair;
    std::deque<std::pair<int, int> > dpair;
    PmergeMe p;

    if(p.chekArgs(ac, av, v, d))
        return 1;
    
    p.checkLeftover(v, d, vleftover, dleftover);
    p.fillAndSortPairs(v, d, vpair, dpair);
    p.mergeSort(vpair);
    p.mergeSort(dpair);
    
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

    std::vector<int> js = Jacobsthal(vsmaller.size()); // Generate Jacobsthal sequence
    
    
    if(js.size() > 2) // Remove 0 and 1
    {
        if(js.size() > 0 && js[0] == 0)
            js.erase(js.begin());
        if(js.size() > 0 && js[0] == 1)
            js.erase(js.begin());
    }
    
    
    int start = 0;
    int end = 1; // Start from 1 because we already inserted vsmaller[0]
    
    for (size_t i = 0; i < js.size(); i++) // Insert remaining vsmaller using Jacobsthal sequence
    {
        start = js[i];
        for (; start > end; start--)
        {
            int idx = start - 1;
            if (idx >= 0 && static_cast<size_t>(idx) < vsmaller.size())
            {
                std::vector<int>::iterator it = std::lower_bound(vlonger.begin(), vlonger.end(), vsmaller[idx]);
                vlonger.insert(it, vsmaller[idx]);
                std::deque<int>::iterator dit = std::lower_bound(dlonger.begin(), dlonger.end(), dsmaller[idx]);
                dlonger.insert(dit, dsmaller[idx]);
            }
        }
        end = js[i];
    }
    
    for (size_t i = end; i < vsmaller.size(); i++)
    {
        std::vector<int>::iterator it = std::lower_bound(vlonger.begin(), vlonger.end(), vsmaller[i]);
        vlonger.insert(it, vsmaller[i]);
        std::deque<int>::iterator dit = std::lower_bound(dlonger.begin(), dlonger.end(), dsmaller[i]);
        dlonger.insert(dit, dsmaller[i]);
    }
    
    if(p.getHasLeftover())
    {

        std::vector<int>::iterator it = std::lower_bound(vlonger.begin(), vlonger.end(), vleftover);
        vlonger.insert(it, vleftover);
        std::deque<int>::iterator dit = std::lower_bound(dlonger.begin(), dlonger.end(), dleftover);
        dlonger.insert(dit, dleftover);
    }
    
    std::cout << "\n\nFinal sorted sequence: ";
    for(int i = 0; i < (int)vlonger.size(); i++)
    {
        std::cout << vlonger[i] << " ";
    }

    std::cout << "\n\nFinal sorted sequence: ";
    for(int i = 0; i < (int)dlonger.size(); i++)
    {
        std::cout << dlonger[i] << " ";
    }
    std::cout << std::endl;
    if(p.getHasLeftover())
        std::cout << "Leftover element: " << vleftover << std::endl;
    
    return 0;
}
