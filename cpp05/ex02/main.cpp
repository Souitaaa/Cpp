/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 01:19:53 by csouita           #+#    #+#             */
/*   Updated: 2025/06/10 16:37:56 by csouita          ###   ########.fr       */
/*                                                                            */    
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Bureaucrat bureaucrat("Alice", 1);
        Bureaucrat bureaucrat2("SIMO", 79); 

        ShrubberyCreationForm shrubberyForm("garden");
        RobotomyRequestForm robotomyForm("Bob");
        PresidentialPardonForm pardonForm("Charlie");

        
        shrubberyForm.beSigned(bureaucrat);
        robotomyForm.beSigned(bureaucrat);
        pardonForm.beSigned(bureaucrat);

       
        std::cout << "Executing ShrubberyCreationForm via executeForm:" << std::endl;
        bureaucrat.executeForm(shrubberyForm);

        std::cout << "Executing RobotomyRequestForm via executeForm:" << std::endl;
        bureaucrat.executeForm(robotomyForm);

        std::cout << "Executing PresidentialPardonForm via executeFor  :" << std::endl;
        bureaucrat.executeForm(pardonForm);
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
