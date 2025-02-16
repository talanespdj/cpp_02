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
#include <math.h>

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	value = 0;
};

Fixed::Fixed(const int val) {
	std::cout << "int val constructor called" << std::endl;
	this->value = val << this->const_val;		
}

Fixed::Fixed(const float val) {
	std::cout << "float val constructor called" << std::endl;
	this->value = roundf(val * (1 << this->const_val));
}

Fixed::~Fixed() {
	std::cout << "Deconstructor called" << std::endl;
};

Fixed::Fixed(const Fixed& f) {
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed&	Fixed::operator=(const Fixed& f) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f)
		this->value = f.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return ((float)this->value);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

float	Fixed::toFloat(void) const {
	return (this->value);
}

int	Fixed::toInt(void) const {
	return (this->value >> this->const_val);
}

std::ostream&	operator<<(std::ostream &obj, Fixed const &f) {
	obj << f.toFloat();
	return (obj);
}