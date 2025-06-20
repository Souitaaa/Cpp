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
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
    try {
        Bureaucrat bureaucrat("Alice", 1);
        Bureaucrat bureaucrat2("SIMO", 79); // High enough grade to execute all forms

        Intern someRandomIntern;
        Form* shrubberyForm = someRandomIntern.makeForm("shrubbery creation", "garden");
        Form* robotomyForm = someRandomIntern.makeForm("robotomy request", "Bob");
        Form* pardonForm = someRandomIntern.makeForm("presidential pardon", "Charlie");

        // Sign all forms
        shrubberyForm->beSigned(bureaucrat);
        robotomyForm->beSigned(bureaucrat);
        pardonForm->beSigned(bureaucrat);

        // Execute all forms using executeForm
        std::cout << "Executing ShrubberyCreationForm via executeForm:" << std::endl;
        bureaucrat.executeForm(*shrubberyForm);

        std::cout << "Executing RobotomyRequestForm via executeForm:" << std::endl;
        bureaucrat.executeForm(*robotomyForm);

        std::cout << "Executing PresidentialPardonForm via executeForm:" << std::endl;
        bureaucrat.executeForm(*pardonForm);

        // Clean up
        delete shrubberyForm;
        delete robotomyForm;
        delete pardonForm;
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
