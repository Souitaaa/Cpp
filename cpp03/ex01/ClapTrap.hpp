/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:58:57 by csouita           #+#    #+#             */
/*   Updated: 2025/02/04 01:26:49 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap{
    private:
        std::string Name;
        int HitPoints ;
        int EnergyPoints ;
        int AttackDamage ;
    public:
        ClapTrap(std::string name);
        // ClapTrap();
        ClapTrap(std::string Name ,int HitPoints, int EnergyPoints, int AttackDamage);
        ~ClapTrap();
        ClapTrap(const ClapTrap& claptrap);
        ClapTrap& operator=(const ClapTrap& claptrap);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName();
        int getHitPoints();
        int getEnergyPoints();
        int getAttackDamage();
        void setName(std::string E_name);
        void setHitPoints(int E_HitPoints);
        void setEnergyPoints(int E_EnergyPoints);
        void setAttackDamage(int E_AttackDamage);
};

#endif