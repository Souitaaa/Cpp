/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mongool <mongool@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 01:19:53 by csouita           #+#    #+#             */
/*   Updated: 2025/06/17 22:54:34 by mongool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"
#include "Bureaucrat.hpp"

void AForm::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() <= requiredGradeToSign)
    {
        this->isSigned = true;
        std::cout << bureaucrat.getName() << " signed " << Name << std::endl;
    }
    else    
        throw AForm::GradeTooLowException("Grade Too Low");
}

bool AForm::getIsSigned() const
{   
    return isSigned;
}

AForm::AForm(std::string name, int requiredGradeToSign, int requiredGradeToExecute) :   Name(name), isSigned(false), requiredGradeToSign(requiredGradeToSign), requiredGradeToExecute(requiredGradeToExecute)
{
    if (requiredGradeToSign < 1 || requiredGradeToExecute < 1)
        throw AForm::GradeTooLowException("Required Grade Too High");
    if (requiredGradeToSign > 150 || requiredGradeToExecute > 150)
        throw AForm::GradeTooLowException("Required Grade Too Low");
}

AForm::~AForm() {}

int AForm::getRequiredGradeToSign() const
{
    return requiredGradeToSign;
}

int AForm::getRequiredGradeToExecute() const
{
    return requiredGradeToExecute;
}

std::ostream &operator<<(std::ostream &o, const AForm &form) {
o << "Form Name: " << form.getName() << ", "
    << "Is Signed: " << (form.getIsSigned() ? "Yes" : "No") << ", " ;
    return o;
} 

std::string AForm::getName() const {
    return Name;
}

AForm::AForm(const AForm &other) : Name(other.Name), isSigned(other.isSigned), requiredGradeToSign(other.requiredGradeToSign), requiredGradeToExecute(other.requiredGradeToExecute) 
{
}

AForm &AForm::operator=(const AForm &other) {
    if (this != &other) {
        isSigned = other.isSigned;
    }
    return *this;
}