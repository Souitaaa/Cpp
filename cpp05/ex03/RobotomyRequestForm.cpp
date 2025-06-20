/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mongool <mongool@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 00:14:31 by mongool           #+#    #+#             */
/*   Updated: 2025/06/20 02:12:08 by mongool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string target) 
    : Form("RobotomyRequestForm" , 72 , 45) , target(target)
{
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    if (!getIsSigned())
        throw Form::GradeTooLowException("Form is not signed");
    if (executor.getGrade() > getRequiredGradeToExecute())
        throw Form::GradeTooLowException("Executor grade is too low");
    std::cout << "Drilling noises for " << target << std::endl;
    std::srand(std::time(0));
    int number = std::rand();
    if (number % 2 == 0)
        std::cout << target << " has been robotomized successfully." << std::endl;
    else
        std::cout << "Robotomy failed for " << target << "." << std::endl;
}



void RobotomyRequestForm::beSigned(const Bureaucrat &bureaucrat) {
    Form::beSigned(bureaucrat);
}

// ...existing code...

RobotomyRequestForm::~RobotomyRequestForm() {}

// ...existing code...