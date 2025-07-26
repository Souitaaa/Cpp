/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 00:52:45 by mongool           #+#    #+#             */
/*   Updated: 2025/07/26 17:36:49 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <stdexcept>



template<typename T>

typename T::iterator easyfind(T &Haystack, int needle)
{
    typename T::iterator it = std::find(Haystack.begin(), Haystack.end(), needle);
    if (it == Haystack.end())
        throw std::runtime_error("Value not found");
    return it;
}

#endif