/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:45:14 by csouita           #+#    #+#             */
/*   Updated: 2025/05/21 17:04:19 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
#include <iomanip>
#include <string>


class Animal{
    protected :
        std::string Type;
    public :
        Animal();
        virtual ~Animal();
        void virtual makeSound() const = 0;
        Animal(const Animal& animal);
        Animal& operator=(const Animal& animal);
        std::string getType() const ;

};

#endif