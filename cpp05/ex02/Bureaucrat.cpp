/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 01:19:53 by csouita           #+#    #+#             */
/*   Updated: 2025/06/10 16:37:56 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bureaucrat) {
    o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return o;
} 

std::string Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    // if (grade <= 150 && grade >= 1)
        return grade;
    // throw BureaucratException("Grade must be between 1 and 150.");
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {
    if (grade < 1)
        throw GradeTooHighException("Grade Too High");
    else if (grade > 150)
        throw GradeTooLowException("Grade Too Low");
    this->grade = grade;
}

Bureaucrat::~Bureaucrat() {
}

void Bureaucrat::setGrade(int newGrade) {
    if (newGrade > 150)
        throw GradeTooLowException("Grade Too Low");
    if (newGrade < 1)
        throw GradeTooHighException("Grade Too High");
    grade = newGrade;
}
void Bureaucrat::incrementGrade() {
    if (grade <= 1)
        throw GradeTooHighException("Cannot increment grade above 1.");
    grade--;
}
void Bureaucrat::decrementGrade() {
    if (grade >= 150)
        throw GradeTooLowException("Cannot decrement grade below 150.");
    grade++;
}
void Bureaucrat::signForm(const AForm &form) const
{
    if(form.getIsSigned() && this->getGrade() <= form.getRequiredGradeToSign())
        std::cout << this->getName() << " Signed " << form.getName() << std::endl ;
    else 
        std::cout <<  this->getName() << " couldn’t sign " << form.getName() << "Because " << "Grade Too Low" <<  std::endl;  
}

void Bureaucrat::executeForm(AForm const & form) {
    try {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    } catch (const std::exception &e) {
        std::cout << this->getName() << " couldn’t execute " << form.getName() << " because: " << e.what() << std::endl;
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade) {
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
    if (this != &other) {
        grade = other.grade;
    }
    return *this;
}