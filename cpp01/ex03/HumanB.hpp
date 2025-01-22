/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:56:39 by csouita           #+#    #+#             */
/*   Updated: 2025/01/22 20:52:14 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP  
#include "Weapon.hpp"

class HumanB{
    private :
        std::string Name ;
        Weapon Type;
    public :
        HumanB(std::string name);
        void attack();
        std::string getName();
        void setName(std::string E_name);
        void setWeapon(Weapon &E_Type);
};
#endif