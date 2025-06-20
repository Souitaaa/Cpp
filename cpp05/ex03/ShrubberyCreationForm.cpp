/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mongool <mongool@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 23:20:30 by mongool           #+#    #+#             */
/*   Updated: 2025/06/20 02:11:40 by mongool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
    : Form("ShrubberyCreationForm", 145, 137), target(target) 
{
    if (target.empty())
        throw Form::GradeTooLowException("Target cannot be empty");
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
        throw Form::GradeTooLowException("Form is not signed");
    if (executor.getGrade() > getRequiredGradeToExecute())
        throw Form::GradeTooLowException("Executor grade is too low");
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

// ShrubberyCreationForm::~ShrubberyCreationForm() {// ...existing code...

ShrubberyCreationForm::~ShrubberyCreationForm() {}

// ...existing code...}

void ShrubberyCreationForm::beSigned(const Bureaucrat &bureaucrat) {
    Form::beSigned(bureaucrat);
}
