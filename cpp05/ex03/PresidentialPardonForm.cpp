/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mongool <mongool@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 00:54:26 by mongool           #+#    #+#             */
/*   Updated: 2025/06/20 00:46:39 by mongool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) 
    : Form("PresidentialPardonForm" , 25 ,5 ) , target(target) 
{
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const 
{
    if (!getIsSigned())
        throw Form::GradeTooLowException("Form is not signed");
    if (executor.getGrade() > getRequiredGradeToExecute())
        throw Form::GradeTooLowException("Executor grade is too low");
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}
