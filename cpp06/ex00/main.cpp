/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 00:52:45 by mongool           #+#    #+#             */
/*   Updated: 2025/07/09 16:52:15 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "FindLeterall.hpp"

int main(int ac , char *av[])
{
    if(ac != 2)
        return 1;
    ScalarConverter::convert(av[1]);
}
