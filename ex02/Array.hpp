/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 16:03:15 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/05/06 16:10:30 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename t>
class Array
{
	public:
		Array ()						: _size(0) {_array = new t[0]();}
		Array (const unsigned int size)	: _size(size) { _array = new t[size]();}
		Array (Array const &copy);
		~Array ();

		// Operator overrides
		Array	&operator=(Array const &source);
		t		&operator[](const int index);

		// Setters & Getters
			unsigned int	size() const;
			t				*getPointer() const;

	private:
		unsigned int	_size;
		t				*_array;
};

# include "Array.tpp"

#endif
