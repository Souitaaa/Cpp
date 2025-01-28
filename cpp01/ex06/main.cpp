/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:20:12 by csouita           #+#    #+#             */
/*   Updated: 2025/01/28 17:24:00 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac , char *av[])
{
    Harl harl;
    if (ac != 2)
    {
        std::cout << "Usage: ./complain [DEBUG, INFO, WARNING, ERROR]" << std::endl;
        return 1;
    }
    harl.complain(av[1]);
    return 0;
}