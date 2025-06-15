/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 17:05:46 by csouita           #+#    #+#             */
/*   Updated: 2025/05/21 16:46:14 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  BRAIN_HPP
# define BRAIN_HPP
#include <iostream>
#include <string>


class Brain{
    private:
        std::string ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(const Brain& copy);
        Brain& operator=(const Brain& brain);
};

#endif