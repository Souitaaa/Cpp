/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 01:10:28 by csouita           #+#    #+#             */
/*   Updated: 2025/02/06 01:32:50 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <iomanip>
# include <string>

class WrongAnimal{
    protected :
        std::string Type;
    public :
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal& copy);
        WrongAnimal& operator=(const WrongAnimal& wronganimal);
        void virtual makeSound() const;
        std::string getType() const ;
        
};

#endif