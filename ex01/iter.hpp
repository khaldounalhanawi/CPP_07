/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 16:04:11 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/05/06 16:04:12 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>

template <typename T, typename Y>
void	iter(T *array, const size_t len, Y fn)
{
	for (size_t i = 0; i < len; i ++)
		fn(array[i]);
}

template <typename T, typename Y>
void	iter(const T *array, const size_t len, Y fn)
{
	for (size_t i = 0; i < len; i ++)
		fn(array[i]);
}

#endif