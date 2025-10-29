#include "BitcoinExchange.hpp"

bitcoin::bitcoin()
{
    std::ifstream ofile("data.csv");
    if(!ofile.is_open())
        std::cerr << "Error: could not open file " <<std::endl;
    std::string line;
    while(std::getline(ofile, line))
    {
        size_t pos = line.find(',');
        if (pos == std::string::npos)
            continue;
        std::string date = line.substr(0, pos);
        std::string value = line.substr(pos + 1);
        this->input.insert(std::make_pair(date, atof(value.c_str())));
    }
    ofile.close();
}

bitcoin::~bitcoin()
{
}

std::string bitcoin::trim(const std::string& str)
{
    size_t first = 0;
    size_t last = str.size();
    while (first < str.size() && std::isspace(static_cast<unsigned char>(str[first])))
        ++first;
    while (last > first && std::isspace(static_cast<unsigned char>(str[last - 1])))
        --last;
    return str.substr(first, last - first);
}

int bitcoin::Countchar(std::string str, char c)
{
    int count = 0;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == c)
            count++;
    }
    return count;
}

int bitcoin::Countargs(std::string str)
{
    int count = 0;
    std::istringstream iss(str);
    std::string word;
    while (iss >> word)
        count++;
    return count;
}
void bitcoin::parseFile(std::string input)
{
    std::ifstream file(input.c_str());
    std::string line;
    if(!file.is_open())
    {
        std::cerr << "Error: could not open file " << input << std::endl;
        return;
    }
    if(!getline(file, line))
    {
        std::cerr << "Error: file is empty" << std::endl;
        return;
    }
    if(trim(line) != "date | value")
    {
        std::cerr << "Missing date | value" << std::endl;
        return;
    }
    while(std::getline(file, line))
    {
        if (Countchar(line, '|') != 1)
        {
            std::cerr << "Error: bad input => " << line << std::endl;
        }
        else if(dateAndValue(line))
            return;
    }
    file.close();
}
int bitcoin::isDateValid(std::string date)
{
    int flag = 0;
    size_t pos = date.find('-');
    if (pos == std::string::npos)
        flag = 1;
    std::string year = trim(date.substr(0, pos));
    std::string month = trim(date.substr(pos + 1, 2));
    std::string day = trim(date.substr(pos + 4, 2));
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
            std::stringstream ss(value);
            float f;
            if (!(ss >> f) || !(ss.eof()))
            {
                std::cerr << "Error: bad input => " << value << std::endl;
                flag = 1;
            }
            data.value = f;
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
            {
                std::map<std::string, float>::iterator it = input.lower_bound(data.date);
                if (it == input.end() || (it != input.begin() && it->first != data.date)) //TODO 7ta nrja3 nchufha
                    --it;
                float result = data.value * it->second;
                std::cout << data.date << " => " << data.value << " = " << result << std::endl;
            }
        }
        return 0;
    }
    return 0;
}

void bitcoin::printMap()
{
	std::map<std::string, float>::const_iterator it;
	for (it = input.begin(); it != input.end(); ++it)
	{
		std::cout << it->first << " => " << it->second << std::endl;
	}
}
