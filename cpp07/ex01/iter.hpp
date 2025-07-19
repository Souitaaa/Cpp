/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 20:32:43 by csouita           #+#    #+#             */
/*   Updated: 2025/07/19 18:18:40 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<typename T, typename F>
void iter(T *array , size_t lenght , void (*fun)(F&))
{
    if (!array || lenght == 0 || fun == NULL)
        return;
    for(size_t i = 0 ; i < lenght ; i++)
        fun(array[i]);
}
#endif