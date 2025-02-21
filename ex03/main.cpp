/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 05:46:21 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/21 00:14:10 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int	main(void)
{
	Point a(-3, 1);
	Point b(0, 0);
	Point c(0, 3);

	Point testPoint(-1.53, 1.8);

	// std::cout << testPoint.getX() << "\t\t\tDATA" << std::endl;
	if (bsp(a, b, c, testPoint))
		std::cout << "Le point est à l'intérieur du triangle." << std::endl;
	else
		std::cout << "Le point est à l'extérieur du triangle." << std::endl;
	return 0; 
}

