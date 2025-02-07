/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 05:48:51 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/07 05:51:22 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
};

Fixed::~Fixed() {
	std::cout << "Deconstructor called" << std::endl;
};

int	Fixed::getRawBits(void) const {
}

void	setRawBits(int const raw) {
}
