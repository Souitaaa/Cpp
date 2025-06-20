/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mongool <mongool@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 00:06:52 by mongool           #+#    #+#             */
/*   Updated: 2025/06/20 02:04:14 by mongool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public Form {
    private : 
        std::string target ;
    public :
        RobotomyRequestForm(std::string target);
        virtual ~RobotomyRequestForm();
        void beSigned(const Bureaucrat &bureaucrat);
        void execute(const Bureaucrat &executor) const ;
        
};
#endif 