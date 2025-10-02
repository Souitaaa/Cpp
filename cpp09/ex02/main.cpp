#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <string>
#include <utility>

int main(int ac, char *av[])
{
    long i;
    char c;
    int vleftover = 0;
    int dleftover = 0;
    std::vector<int> v;
    std::deque<int> d;
    std::vector<std::pair<int, int> > vpair;
    std::deque<std::pair<int, int> > dpair;
    
    if(ac < 2)
    {
        std::cout << "Error : entrer args" << std::endl;
        return 1;
    }
    
    for(int j = 1; j < ac ; j++) // parsing args  and fill 
    {
        std::stringstream ss(av[j]);
        if (!(ss >> i))
        {
            std::cout << "Error" << std::endl;
            return 1;
        }
        if (ss >> c)
        {
            std::cout << "still has" << std::endl;
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
    if (v.size() % 2 != 0 )
    {
        std::cout << "it has a odd number of elements" << std::endl;
        std::cout  << v.back() << std::endl;
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
    
    for(int i = 0 ; i < (int)vpair.size(); i++) //sort eacch pair
    {
        if(vpair[i].first < vpair[i].second)
        {
            std::swap(vpair[i].first, vpair[i].second);
        }
    }
    
    for(int i = 0 ; i < (int)dpair.size(); i++) // sort each deque pair 
    {
        if(dpair[i].first < dpair[i].second)
        {
            std::swap(dpair[i].first, dpair[i].second);
        }
    }

    std::cout << "Before sorting pairs :" << std::endl;
    for(int i = 0; i < (int)vpair.size(); i++)
    {
        std::cout << "vpair[" << i << "]: " << vpair[i].first << " , " << vpair[i].second << std::endl;
    }
    
    
    PmergeMe::mergeSort(vpair); // Sort the pairs using merge sort based on their first elements
    
    std::cout << "\nAfter sorting   :" << std::endl;
    for(int i = 0; i < (int)vpair.size(); i++)
    {
        std::cout << "vpair[" << i << "]: " << vpair[i].first << " , " << vpair[i].second << std::endl;
    }
    
   
    std::vector<int> longer;
    for(int i = 0; i < (int)vpair.size(); i++)
    {
        longer.push_back(vpair[i].first); // get the first element of eacch pair
    }
    
    std::cout << "\nSorted longer elements: ";
    for(int i = 0; i < (int)longer.size(); i++)
    {
        std::cout << longer[i] << " ";
    }
    std::cout << std::endl;
    
    std::vector<int> smaller;
    for(int i = 0; i < (int)vpair.size(); i++) // get the second element of each pair
    {
        smaller.push_back(vpair[i].second);
    }
    
    std::cout << "Corresponding smaller elements: ";
    for(int i = 0; i < (int)smaller.size(); i++)
    {
        std::cout << smaller[i] << " ";
    }
    std::cout << std::endl;
    
    // Create main chain with first smaller element at beginning
    std::vector<int> mainChain;
    mainChain.push_back(smaller[0]); // Insert first smaller element
    
    for(int i = 0; i < (int)longer.size(); i++) // Add all longer elements
    {
        mainChain.push_back(longer[i]);
    }
    
    std::cout << "\nMain chain: ";
    for(int i = 0; i < (int)mainChain.size(); i++)
    {
        std::cout << mainChain[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}