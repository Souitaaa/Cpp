/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ttt.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:37:13 by csouita           #+#    #+#             */
/*   Updated: 2025/01/25 17:44:39 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
    std::string originalFilename = "example.txt"; 
    std::string modifiedFilename;

    std::size_t dotPosition = originalFilename.find_last_of('.');

    if (dotPosition != std::string::npos) 
        modifiedFilename = originalFilename.substr(0, dotPosition) + ".replace" ;
    else
        modifiedFilename = originalFilename + ".replace";
        
    std::cout << "Original Filename: " << originalFilename << std::endl;
    std::cout << "Modified Filename: " << modifiedFilename << std::endl;

    return 0;
}
