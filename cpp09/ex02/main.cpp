#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <string>
#include <utility>
#include <algorithm>

// Function to generate Jacobsthal sequence
std::vector<int> Jacobsthal(size_t n)
{
    std::vector<int> js;
    if (n == 0)
        return js;
    
    js.push_back(0);
    if (n == 1)
        return js;
    
    js.push_back(1);
    
    // Generate Jacobsthal numbers: J(n) = J(n-1) + 2*J(n-2)
    while (true)
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
    long i;
    char c;
    int vleftover = 0;
    int dleftover = 0;
    bool hasLeftover = false;
    std::vector<int> v;
    std::deque<int> d;
    std::vector<std::pair<int, int> > vpair;
    std::deque<std::pair<int, int> > dpair;
    
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
    
    // checking if there is a leftover 
    if (v.size() % 2 != 0)
    {
        hasLeftover = true;
        vleftover = v.back();
        v.pop_back();  
        dleftover = d.back();
        d.pop_back();
    }
    
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
    
    for(int i = 0 ; i < (int)dpair.size(); i++) // sort each deque pair internally
    {
        if(dpair[i].first < dpair[i].second)
        {
            std::swap(dpair[i].first, dpair[i].second);
        }
    }

    std::cout << "Before sorting pairs:" << std::endl;
    for(int i = 0; i < (int)vpair.size(); i++)
    {
        std::cout << "vpair[" << i << "]: " << vpair[i].first << " , " << vpair[i].second << std::endl;
    }
    
    // Sort the pairs using merge sort based on their first elements
    PmergeMe::mergeSort(vpair);
    
    std::cout << "\nAfter sorting pairs by first element (using merge sort):" << std::endl;
    for(int i = 0; i < (int)vpair.size(); i++)
    {
        std::cout << "vpair[" << i << "]: " << vpair[i].first << " , " << vpair[i].second << std::endl;
    }
    
    // Extract winners (longer/larger elements) and losers (smaller elements)
    std::vector<int> winners;
    std::vector<int> loser;
    
    for(int i = 0; i < (int)vpair.size(); i++)
    {
        winners.push_back(vpair[i].first);
        loser.push_back(vpair[i].second);
    }
    
    std::cout << "\nWinners (larger elements): ";
    for(int i = 0; i < (int)winners.size(); i++)
    {
        std::cout << winners[i] << " ";
    }
    std::cout << std::endl;
    
    std::cout << "Losers (smaller elements): ";
    for(int i = 0; i < (int)loser.size(); i++)
    {
        std::cout << loser[i] << " ";
    }
    std::cout << std::endl;
    
    // Insert first loser at the beginning
    if(!loser.empty())
    {
        winners.insert(winners.begin(), loser[0]);
        std::cout << "\nAfter inserting first loser: ";
        for(int i = 0; i < (int)winners.size(); i++)
        {
            std::cout << winners[i] << " ";
        }
        std::cout << std::endl;
    }
    
    // Generate Jacobsthal sequence
    std::vector<int> js = Jacobsthal(loser.size());
    
    std::cout << "\nJacobsthal sequence (raw): ";
    for(int i = 0; i < (int)js.size(); i++)
    {
        std::cout << js[i] << " ";
    }
    std::cout << std::endl;
    
    // Remove leading 0s and 1s
    if(js.size() > 3)
    {
        if(js.size() > 0 && js[0] == 0)
            js.erase(js.begin());
        if(js.size() > 0 && js[0] == 1)
            js.erase(js.begin());
    }
    
    std::cout << "Jacobsthal sequence (after cleanup): ";
    for(int i = 0; i < (int)js.size(); i++)
    {
        std::cout << js[i] << " ";
    }
    std::cout << std::endl;
    
    // Insert remaining losers using Jacobsthal sequence
    int start = 0;
    int end = 1; // Start from 1 because we already inserted loser[0]
    
    for (size_t i = 0; i < js.size(); i++)
    {
        start = js[i];
        for (; start > end; start--)
        {
            int idx = start - 1;
            if (idx >= 0 && static_cast<size_t>(idx) < loser.size())
            {
                std::cout << "\nInserting loser[" << idx << "] = " << loser[idx];
                std::vector<int>::iterator it = std::lower_bound(winners.begin(), winners.end(), loser[idx]);
                winners.insert(it, loser[idx]);
                std::cout << " -> Result: ";
                for(int j = 0; j < (int)winners.size(); j++)
                {
                    std::cout << winners[j] << " ";
                }
            }
        }
        end = js[i];
    }
    
    // Insert any remaining losers that weren't covered by Jacobsthal sequence
    for (size_t i = end; i < loser.size(); i++)
    {
        std::cout << "\nInserting remaining loser[" << i << "] = " << loser[i];
        std::vector<int>::iterator it = std::lower_bound(winners.begin(), winners.end(), loser[i]);
        winners.insert(it, loser[i]);
        std::cout << " -> Result: ";
        for(int j = 0; j < (int)winners.size(); j++)
        {
            std::cout << winners[j] << " ";
        }
    }
    
    // Insert leftover element if exists
    if(hasLeftover)
    {
        std::cout << "\n\nInserting leftover element: " << vleftover;
        std::vector<int>::iterator it = std::lower_bound(winners.begin(), winners.end(), vleftover);
        winners.insert(it, vleftover);
    }
    
    std::cout << "\n\nFinal sorted sequence: ";
    for(int i = 0; i < (int)winners.size(); i++)
    {
        std::cout << winners[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}