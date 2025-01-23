/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:30:48 by csouita           #+#    #+#             */
/*   Updated: 2025/01/23 20:15:23 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
#include <iostream>

class HumanA{
    private :
        std::string Name ;
        Weapon &Type;
    public :
        HumanA(std::string name, Weapon &type);
        void attack();
        std::string getName();
        void setName(std::string E_name);
};


#endif