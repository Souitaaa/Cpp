#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    try
    {
        if (ac != 2)
        {
            std::cerr << "Error: could not open file." << std::endl;
            return 1;
        }
        bitcoin btc;
        btc.parseFile(av[1]);
        return 0;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}