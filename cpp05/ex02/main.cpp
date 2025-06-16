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

int main() {
    try {
        Bureaucrat bureaucrat("Alice", 50);
        ShrubberyCreationForm form("garden");

        std::cout << "Before signing: " << form << std::endl;
        form.beSigned(bureaucrat);
        std::cout << "After signing: " << form << std::endl;
        bureaucrat.signForm(form);
        RobotomyRequestForm robotomyForm("Bob");
        std::cout << "Before signing: " << robotomyForm << std::endl;
        robotomyForm.beSigned(bureaucrat);
        std::cout << "After signing : " << robotomyForm << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
