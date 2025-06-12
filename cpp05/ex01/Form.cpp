/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 01:19:53 by csouita           #+#    #+#             */
/*   Updated: 2025/06/11 22:18:12 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"
#include "Bureaucrat.hpp"

void Form::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() <= requiredGradeToSign)
    {
        this->isSigned = true;
        std::cout << bureaucrat.getName() << " signed " << Name << std::endl;
    }
    else    
        throw Form::GradeTooLowException("Grade Too Low");
}

bool Form::getIsSigned() const
{   
    return isSigned;
}

Form::Form(std::string name, int requiredGradeToSign, int requiredGradeToExecute) :   Name(name), isSigned(false), requiredGradeToSign(requiredGradeToSign), requiredGradeToExecute(requiredGradeToExecute)
{
    if (requiredGradeToSign < 1 || requiredGradeToExecute < 1)
        throw Form::GradeTooLowException("Required Grade Too High");
    if (requiredGradeToSign > 150 || requiredGradeToExecute > 150)
        throw Form::GradeTooLowException("Required Grade Too Low");
}

Form::~Form() {}

int Form::getRequiredGradeToSign() const
{
    return requiredGradeToSign;
}

int Form::getRequiredGradeToExecute() const
{
    return requiredGradeToExecute;
}

std::ostream &operator<<(std::ostream &o, const Form &form) {
o << "Form Name: " << form.getName() << ", "
    << "Is Signed: " << (form.getIsSigned() ? "Yes" : "No") << ", " ;
    return o;
} 

std::string Form::getName() const {
    return Name;
}