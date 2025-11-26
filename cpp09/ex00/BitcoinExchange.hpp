#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <cstdlib>
#include <cctype> 


class bitcoin
{
    private :
        std::map<std::string, float> input;
        struct Data
        {
            std::string date;
            float       value;
        }      data;
    public :
        bitcoin();
        ~bitcoin();
        void parseFile(std::string input);
        int dateAndValue(std::string line);
        int isDateValid(std::string date);
        int Countchar(std::string str, char c);
        int Countargs(std::string str);
        std::string trim(const std::string& str);
        bool isLeapYear(int year);
};
#endif 