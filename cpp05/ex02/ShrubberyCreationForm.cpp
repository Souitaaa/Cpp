/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 23:20:30 by mongool           #+#    #+#             */
/*   Updated: 2025/07/03 23:15:30 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
    : AForm("ShrubberyCreationForm", 145, 137), target(target) 
{
    if (target.empty())
        throw AForm::GradeTooLowException("Target cannot be empty");
    std::ofstream file((target + "_shrubbery").c_str());
        file << 
    "          &&& &&  & &&\n"
    "      && &\\/&\\|& ()|/ @, &&\n"
    "      &\\/(/&/&||/& /_/)_&/_&\n"
    "   &() &\\/&|()|/&\\/ '%\" & ()\n"
    "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
    "&&   && & &| &| /& & % ()& /&&\n"
    " ()&_---()&\\&\\|&&-&&--%---()~\n"
    "     &&     \\|||\n"
    "             |||\n"
    "             |||\n"
    "             |||\n"
    "       , -=-~  .-^- _\n";
        file.close();
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    if (!getIsSigned())
        throw AForm::GradeTooLowException("Form is not signed");
    if (executor.getGrade() > getRequiredGradeToExecute())
        throw AForm::GradeTooLowException("Executor grade is too low");
    std::ofstream file((target + "_shrubbery").c_str());
    if (!file.is_open())
        throw std::runtime_error("Failed to open file for writing");
    file << "          &&& &&  & &&\n"
          << "      && &\\/&\\|& ()|/ @, &&\n"  
          << "      &\\/(/&/&||/& /_/)_&/_&\n"
          << "   &() &\\/&|()|/&\\/ '%\" & ()\n"
          << "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
          << "&&   && & &| &| /& & % ()& /&&\n"
          << " ()&_---()&\\&\\|&&-&&--%---()~\n"
          << "     &&     \\|||\n"
          << "             |||\n"
          << "             |||\n"
          << "             |||\n"
          << "       , -=-~  .-^- _\n";
    file.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::beSigned(const Bureaucrat &bureaucrat) {
    AForm::beSigned(bureaucrat);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) 
    : AForm(other), target(other.target) 
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
    if (this != &other) {
        AForm::operator=(other);
        target = other.target;
    }
    return *this;
}