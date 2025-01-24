/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:45:25 by csouita           #+#    #+#             */
/*   Updated: 2025/01/24 22:47:37 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>
#include <string>


int main(int ac , char *av[]) 
{
    std::string search = av[1] ;
    std::string replace = av[2] ;
    const char* filename = "main.cpp";
    const char* outname = "main.cpp.replace";
    std::ofstream outfile(outname);
    std::ifstream file(filename);
    if(ac != 4)
    {
        std::cout << "Error: Wrong number of arguments" << std::endl;
        std::cout << "Please enter the filename and the strings S1 and S2" << std::endl;
        return 1;
    }
    if (!outfile.is_open())
    {
        std::cerr << "Failed to open the outfile: " << outname << std::endl;
    }
    if (file.is_open()) 
    {
        std::string line;

        while (std::getline(file, line)) {
            outfile << line << std::endl;
        }
        file.close();
    } 
    outfile.close();
    std::ifstream infile(outname);
    if(infile)
    {        
        std::string line2;
        while(std::getline(infile, line2))
            std::cout << line2 << std::endl;
        infile.close();
    }
    else 
        std::cerr << "Failed to open the file: " << outname << std::endl;
    return 0;
}