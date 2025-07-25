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
#include "Form.hpp"

int main()
{
    try {
        Form form("Form1", 15, 10);
        Bureaucrat bureaucrat("lhossin",15);
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
        std::cout << "After incrementing grade: " << bureaucrat << std::endl;
        bureaucrat.decrementGrade();
        std::cout << "After decrementing grade: " << bureaucrat << std::endl;
        Bureaucrat bureaucrat2("l7ssen", 44);
        std::cout << bureaucrat2 << std::endl;
        form.beSigned(bureaucrat2);
        bureaucrat.signForm(form);
    }
    catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "End of program." << std::endl;
    return 0;
}