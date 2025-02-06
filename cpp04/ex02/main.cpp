/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 00:31:07 by csouita           #+#    #+#             */
/*   Updated: 2025/02/06 18:35:57 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{   
    Animal *animals[10];
    for (int i = 0 ; i < 10 ; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    for (int i = 0 ; i < 10 ; i++)
    {
        animals[i]->makeSound();
    }
    for (int i = 0 ; i < 10 ; i++)
    {
        delete animals[i];
    }
    
    std::cout << "-------------------" << std::endl;    
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    return 0;
}