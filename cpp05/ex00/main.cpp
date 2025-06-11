/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 01:19:53 by csouita           #+#    #+#             */
/*   Updated: 2025/06/10 16:37:56 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat bureaucrat("John Doe",15);
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
        std::cout << "After increment: " << bureaucrat << std::endl;
        bureaucrat.decrementGrade();
        std::cout << "After decrement: " << bureaucrat << std::endl;
        bureaucrat.setGrade(150);
        std::cout << "After setting grade to 150: " << bureaucrat << std::endl;
        bureaucrat.setGrade(0); // This will throw an exception
    } 
    catch (const Bureaucrat::BureaucratException &e) {
        std::cerr << "Bureaucrat error: " << e.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooHighException &e) {
        std::cerr << "Grade too high: " << e.what() << std::endl;
    } 
    catch (const Bureaucrat::GradeTooLowException &e) {
        std::cerr << "Grade too low: " << e.what() << std::endl;
    }
    return 0;
}