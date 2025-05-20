/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 00:37:09 by csouita           #+#    #+#             */
/*   Updated: 2025/05/19 15:50:14 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include <iomanip>
# include <string>
# include "Animal.hpp"


class Dog : public Animal{
    public :
        Dog();
        ~Dog();
        Dog(const Dog& copy);
        Dog &operator=(const Dog& dog);
        void virtual makeSound() const ;
};

#endif