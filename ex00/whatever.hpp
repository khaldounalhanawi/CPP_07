/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 16:04:35 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/05/06 16:04:36 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename t>
const t	&min(const t &a, const t &b)
{
	return (a < b ? a : b);
}

template <typename t>
const t	&max(const t &a, const t &b)
{
	return (a > b ? a : b);
}

template <typename t>
void	swap(t &a, t &b)
{
	t	temp = a;

	a = b;
	b = temp;
	return ;
}

#endif
