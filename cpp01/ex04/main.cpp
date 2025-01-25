/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:45:25 by csouita           #+#    #+#             */
/*   Updated: 2025/01/25 18:16:38 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "main.hpp"


int main(int ac, char *av[]) 
{
    if (ac != 4)
    {
        std::cerr << "Error: Wrong number of arguments" << std::endl;
        std::cerr << "Please enter the filename and the strings S1 and S2" << std::endl;
        return 1;
    }

    std::string search = av[2];
    std::string replace = av[3];
    std::string  filename = av[1];
    std::string  outname ;
    std::size_t dotPosition = (filename).find_last_of('.');
    if (dotPosition != std::string::npos)
        outname = filename.substr(0 , dotPosition) + ".replace";
    else 
        outname = filename + ".replace";

    
    std::ofstream outfile(outname.c_str());
    std::ifstream file(filename.c_str());
    if (!outfile.is_open() || !file.is_open()) 
    {
        std::cerr << "Failed to open the file: " << filename << std::endl;
        return 1;
    }

    std::string line;    
    while(std::getline(file , line))
    {
        std::size_t pos = 0 ;
        while((pos = line.find(search , pos)) != std::string::npos)
        {
            outfile << line.substr(0, pos) << replace;
            pos += search.length();
            line = line.substr(pos);
            pos = 0;
        }
        outfile << line << std::endl;
    }
    file.close();
    outfile.close();
    return 0;
}
