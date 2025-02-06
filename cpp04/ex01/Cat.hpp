/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 00:36:07 by csouita           #+#    #+#             */
/*   Updated: 2025/02/06 01:25:40 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include "Animal.hpp"

class Cat : public Animal{
    public :
        Cat();
        ~Cat();
        Cat(const Cat& copy);
        Cat &operator=(const Cat& cat);
        void virtual makeSound() const;
};

#endif