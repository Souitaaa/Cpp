#include "BitcoinExchange.hpp"

bitcoin::bitcoin()
{
}

bitcoin::~bitcoin()
{
}

void bitcoin::parseFile(std::string input)
{
    std::ifstream file(input.c_str());
    if(!file.is_open())
    {
        std::cerr << "Error: could not open file " << input ;
        return;
    }
    std::string line ;
    getline(file, line);
    if(line != "date | value")
    {
        std::cerr << "Error: bad input => " << line << std::endl;
        return;
    }
    while(std::getline(file, line))
    {
        if(dateAndValue(line))
            return;
    }
}
int bitcoin::isDateValid(std::string date)
{
    int flag = 0;
    size_t pos = date.find('-');
    if (pos == std::string::npos)
        flag = 1;
    std::string year = date.substr(0, pos);
    std::string month = date.substr(pos + 1, 2);
    std::string day = date.substr(pos + 4, 2);
    if (year.length() != 4 || month.length() != 2 || day.length() != 2)
    {
        std::cerr << "Error: bad input => " << date << std::endl;
        flag = 1;
    }
    else if(atof(year.c_str()) < 2009 || atof(year.c_str()) > 2022)
    {
        std::cerr << "Error: bad input => " << date << std::endl;
        flag = 1;
    }
    else if(atof(month.c_str()) < 1 || atof(month.c_str()) > 12)
    {
        std::cerr << "Error: bad input => " << date << std::endl;
        flag = 1;
    }
    else if(atof(day.c_str()) < 1 || atof(day.c_str()) > 31)
    {
        std::cerr << "Error: bad input => " << date << std::endl;
        flag = 1;
    }
    return flag;
}

int bitcoin::dateAndValue(std::string line)
{
    bitcoin::Data data;
    int flag = 0;
    while(!line.empty())
    {
        size_t pos = line.find('|');
        if (pos == std::string::npos)
            flag = 1;
        data.date = line.substr(0, pos - 1);
        if(isDateValid(data.date))
            flag = 1;
        if(flag != 1)
        {
            std::string value = line.substr(pos + 2,  line.length());
            data.value = atof(value.c_str());
            if(data.value < 0)
            {
                std::cerr << "Error: not a positive number." << std::endl;
                flag = 1;
            }
            else if(data.value > 1000)
            {
                std::cerr << "Error: too large a number." << std::endl;
                flag = 1;
            }
            if(flag != 1)
                std::cout << data.date << " => " << data.value << std::endl;
        }
        return 0;
    }
    return 0;
}
