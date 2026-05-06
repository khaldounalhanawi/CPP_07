/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 16:03:35 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/05/06 16:03:36 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	hey(int &i)
{
	std::cout << i << std::endl;
	i = 0;
}

void	heyConst(const int &i)
{
	std::cout << i << std::endl;
}

void	heyChar(char &c)
{
	std::cout << c << std::endl;
	c = 'F';
}

int	main()
{
	{std::cout << ">>1<<\n";

	int arr[4] = {3,2,1,5};

	::iter (arr, 4, hey);

	std::cout << "**************************\n";
	for (int i = 0; i < 4; i ++)
		std::cout << arr[i] << "\n";
	}
	{std::cout << ">>2<<\n";
	char line[3] = {'a', 'b', 'c'};

	::iter (line, 4, heyChar);

	std::cout << "**************************\n";
	for (int i = 0; i < 3; i ++)
		std::cout << line[i] << "\n";
	}
	{std::cout << ">>3<<\n";

	const int arr[4] = {3,2,1,5};

	::iter (arr, 4, heyConst);

	std::cout << "**************************\n";
	for (int i = 0; i < 4; i ++)
		std::cout << arr[i] << "\n";
	}
	return (0);
}