/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 00:59:11 by mongool           #+#    #+#             */
/*   Updated: 2025/07/03 23:18:14 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() 
{   
}

Intern::~Intern() 
{
}

AForm *Intern::makeForm(const std::string &Name, const std::string &target)
{
    std::string Forms[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    int i = 0;
    while (i < 3 && Forms[i] != Name)
        i++;
    switch (i)
    {
        case 0:
            std::cout << "Intern creates " << Name << std::endl;
            return new ShrubberyCreationForm(target);
        case 1:
            std::cout << "Intern creates " << Name << std::endl;
            return new RobotomyRequestForm(target);
        case 2:
            std::cout << "Intern creates " << Name << std::endl;
            return new PresidentialPardonForm(target);
        default:
            throw FormNotFoundException("Form not found: " + Name);
            return NULL;
    }
}

Intern::Intern(const Intern &other) 
{
    (void)other;
}

Intern &Intern::operator=(const Intern &other) 
{
    (void)other;
    return *this;
}