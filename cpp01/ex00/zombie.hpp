/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 20:52:09 by csouita           #+#    #+#             */
/*   Updated: 2025/01/20 23:46:26 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include "main.hpp"
#include <iostream>

class Zombie {
    private :
        std::string Name;
    public :
        ~Zombie()
        {
            std::cout << "Zombie " << Name << " is dead" << std::endl;
        }
        void announce(void); 
        void SetName(std::string Name);
        std::string GetName();
        static Zombie* newZombie(std::string name);
        void randomChump(std::string name);
};

#endif