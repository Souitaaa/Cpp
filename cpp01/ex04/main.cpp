/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:45:25 by csouita           #+#    #+#             */
/*   Updated: 2025/04/14 18:38:36 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

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
    std::string filename = av[1];
    if (search.empty() || filename.empty())
    {
        std::cerr << "Error: S1 and S2 cannot be empty" << std::endl;
        return 1;
    }
    std::string outname;
    outname = filename + ".replace";

    std::ofstream outfile(outname.c_str());
    std::ifstream file(filename.c_str());
    if (!outfile.is_open() || !file.is_open())
    {
        std::cerr << "Failed to open the file: " << filename << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(file, line))
    {
        std::size_t pos = 0;
        while ((pos = line.find(search, pos)) != std::string::npos)
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
