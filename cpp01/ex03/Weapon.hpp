/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:18:17 by csouita           #+#    #+#             */
/*   Updated: 2025/04/12 22:21:30 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon {
    private :
        std::string Type;

    public :
        Weapon();
        Weapon(std::string E_type);
        std::string getType();
        void setType(std::string E_ttype);
};

#endif