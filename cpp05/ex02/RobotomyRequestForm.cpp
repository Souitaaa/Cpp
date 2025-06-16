/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mongool <mongool@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 00:14:31 by mongool           #+#    #+#             */
/*   Updated: 2025/06/17 00:52:00 by mongool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
RobotomyRequestForm::RobotomyRequestForm(std::string target) 
    : Form("RobotomyRequestForm" , 72 , 45) , target(target)
{
    if (target.empty())
        throw Form::GradeTooLowException("Target cannot be empty");
    std::cout << "Make some drilling noises " << std::endl;
    std::srand(std::time(0));
    int number = std::rand();
    if (number % 2 == 0)
        std::cout << target << " has been informed" << std::endl;
    else
        std::cout << "robotomy failed ." << std::endl;
}
void RobotomyRequestForm::beSigned(const Bureaucrat &bureaucrat) {
    Form::beSigned(bureaucrat);
}