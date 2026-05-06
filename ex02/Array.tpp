/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 16:02:55 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/05/06 16:02:57 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <stdexcept>

template <typename t>
Array<t>::Array(const Array<t>& other):
_size(other.size()),
_array(new t[other.size()]())
{
	for (unsigned int i = 0; i < _size; i ++)
		this->_array[i] = other.getPointer()[i];
}

template <typename t>
Array<t> &Array<t>::operator=(const Array<t>& source)
{
	if (this == &source)
		return (*this);
	this->_size = source.size();
	delete[] this->_array;
	this->_array = new t[source.size()]();
	for (unsigned int i = 0; i < _size; i ++)
		this->_array[i] = source.getPointer()[i];
	return *this;
}

template <typename t>
Array<t>::~Array()
{
	delete[] this->_array;
}

template <typename t>
unsigned int	Array<t>::size(void) const
{
	return (this->_size);
}

template <typename t>
t	*Array<t>::getPointer(void) const
{
	return (this->_array);
}

template <typename t>
t	&Array<t>::operator[](const int index)
{
	if (index < 0 || index >= static_cast<int>(this->_size))
		throw std::out_of_range("Failed to access array element at given index");
	return (this->_array[index]);
}
