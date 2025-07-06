/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 00:14:31 by mongool           #+#    #+#             */
/*   Updated: 2025/07/03 23:15:07 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string target) 
    : AForm("RobotomyRequestForm" , 72 , 45) , target(target)
{
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    if (!getIsSigned())
        throw AForm::GradeTooLowException("Form is not signed");
    if (executor.getGrade() > getRequiredGradeToExecute())
        throw AForm::GradeTooLowException("Executor grade is too low");
    std::cout << "Drilling noises for " << target << std::endl;
    std::srand(std::time(0));
    int number = std::rand();
    if (number % 2 == 0)
        std::cout << target << " has been robotomized successfully." << std::endl;
    else
        std::cout << "Robotomy failed for " << target << "." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::beSigned(const Bureaucrat &bureaucrat) {
    AForm::beSigned(bureaucrat);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) 
    : AForm(other), target(other.target) 
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
    if (this != &other) {
        AForm::operator=(other);
        target = other.target;
    }
    return *this;
}