/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 20:32:43 by csouita           #+#    #+#             */
/*   Updated: 2025/07/18 19:27:29 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : array(NULL) {}

template <typename T>
Array<T>::Array(unsigned int n) : N(n) 
{
    if (n == 0) 
        array = NULL;
    else 
        array = new T[n];
}

template <typename T>
Array<T>::Array(const Array &copy) 
{
    N = copy.N;
    if (N == 0) 
        array = NULL;
    else 
    {
        this->array = new T[N];
        for (unsigned int i = 0; i < N; ++i)
            this->array[i] = copy.array[i];
    }
    return *this;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &array) 
{
    if (this != &array) 
    {
        delete[] this->array;
        N = array.N;
        if (N == 0) 
            this->array = NULL;
        else 
        {
            this->array = new T[N];
            for (unsigned int i = 0; i < N; ++i)
                this->array[i] = array.array[i];
        }
    }
    return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int array)
{
    if (array.N >= N)
        throw std::out_of_range("Index out of range");
    return this->array[array.N];
}

template <typename T>
T Array<T>::size() 
{
    return N;
}

template <typename T>
Array<T>::~Array()
{
    delete[] array;
}