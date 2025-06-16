/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mongool <mongool@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 23:20:30 by mongool           #+#    #+#             */
/*   Updated: 2025/06/17 00:01:46 by mongool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
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

ShrubberyCreationForm::~ShrubberyCreationForm() {} ;

void ShrubberyCreationForm::beSigned(const Bureaucrat &bureaucrat) {
    Form::beSigned(bureaucrat);
}
