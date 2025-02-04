/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 22:15:18 by csouita           #+#    #+#             */
/*   Updated: 2025/02/03 23:35:56 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public virtual ClapTrap, public FragTrap, public ScavTrap {
    private :
        std::string Name;
    public:
        DiamondTrap(std::string name);
        ~DiamondTrap();
        DiamondTrap& operator=(const DiamondTrap& DiamondTrap);
        void whoAmI();
};

#endif