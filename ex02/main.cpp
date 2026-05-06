/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 16:03:03 by kalhanaw          #+#    #+#             */
/*   Updated: 2026/05/06 16:03:04 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int	main()
{
	Array<char> a(4);

	std::cout << static_cast<char>(a.getPointer()[0] + 44) << "\n";
	std::cout << a.getPointer()[1] + 44<< "\n";
	std::cout << a.getPointer()[2] + 44<< "\n";
	std::cout << a.getPointer()[3] + 44<< "\n";
	
	const int bb = 1;
	a[bb] = 'f';
	a[3] = 'z';
	std::cout << a[bb]<< "\n";
	std::cout << a[3]<< "\n";

	try								{	a[23] = 'k';	}
	catch (const std::exception &e)	{	std::cout<<e.what() << std::endl;	}
	
	// a[-2] = 'f';

	return (0);
}