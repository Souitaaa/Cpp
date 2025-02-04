/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:20:40 by csouita           #+#    #+#             */
/*   Updated: 2025/02/04 21:28:22 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp" 

class FragTrap : virtual public ClapTrap {
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(const FragTrap& FragTrap);
        FragTrap& operator=(const FragTrap& FragTrap);
        void highFivesGuys();
};

#endif