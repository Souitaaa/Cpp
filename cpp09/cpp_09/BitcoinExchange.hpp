#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <cstdlib>

class bitcoin
{
    private :
        std::map<int , int> input;
        struct Data
        {
            std::string date;
            double       value;
        }      data;
    public :
        bitcoin();
        ~bitcoin();
        void parseFile(std::string input);
        int dateAndValue(std::string line);
        int isDateValid(std::string date);

};
#endif 