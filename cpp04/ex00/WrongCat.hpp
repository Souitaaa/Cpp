/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 01:15:01 by csouita           #+#    #+#             */
/*   Updated: 2025/02/06 01:27:15 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include <iostream>
# include <iomanip>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    public :
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat& copy);
        WrongCat &operator=(const WrongCat& wrongcat);
        void virtual makeSound() const;
};

#endif