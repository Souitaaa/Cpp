/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:20:20 by csouita           #+#    #+#             */
/*   Updated: 2025/01/10 22:46:39 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

`#include <iostream>
#include <sstream>

int main() {
    std::string str = "123";
    int num;
    std::stringstream(str) >> num;
    std::cout << "The integer value is: " << num << std::endl;
    return 0;
}

