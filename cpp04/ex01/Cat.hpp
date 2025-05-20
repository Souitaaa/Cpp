/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 00:36:07 by csouita           #+#    #+#             */
/*   Updated: 2025/05/18 16:33:59 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    private : 
        Brain *brain;
    public :
        Cat();
        ~Cat();
        Cat(const Cat& copy);
        Cat &operator=(const Cat& cat);
        void virtual makeSound() const;
};

#endif