/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 20:52:09 by csouita           #+#    #+#             */
/*   Updated: 2025/04/14 20:16:36 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie {
    private :
        std::string Name;
    public :
        ~Zombie();
        void announce(void); 
        void SetName(std::string Name);
        std::string GetName();
        static Zombie* zombieHorde(int N, std::string name);
};

#endif