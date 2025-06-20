/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mongool <mongool@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 23:16:15 by mongool           #+#    #+#             */
/*   Updated: 2025/06/20 02:04:11 by mongool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <fstream>
class ShrubberyCreationForm : public Form {
    private:
        std::string target;
    public:
        ShrubberyCreationForm(std::string target);
        virtual ~ShrubberyCreationForm();
        void beSigned(const Bureaucrat &bureaucrat);
        void execute(const Bureaucrat &executor) const;
};

#endif 