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
	Point a(3, 1);
	Point b(3, 4);
	Point c(-2, 1);

	Point testPoint(0.63, 2.8);

	if (bsp(a, b, c, testPoint))
		std::cout << "\nLe point est à l'intérieur du triangle.\n\n" << std::endl;
	else
		std::cout << "\nLe point est à l'extérieur du triangle.\n" << std::endl;
	return 0; 
}

