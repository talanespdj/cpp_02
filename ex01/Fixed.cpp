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
	fp_val = 0;
};

Fixed::Fixed(const int val) {
	std::cout << "int val constructor called" << std::endl;
	setRawBits(val << this->const_val);
}

Fixed::Fixed(const float val) {
	std::cout << "float val constructor called" << std::endl;
	this->setRawBits((int)roundf(val * (1 << this->const_val)));
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
		this->fp_val = f.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const {
	return ((float)this->fp_val);
}

void	Fixed::setRawBits(int const raw) {
	this->fp_val = raw;
}

float	Fixed::toFloat(void) const {
	float	f;

	f = (float)this->getRawBits() / (1 << this->const_val);
	return (f);
}

int	Fixed::toInt(void) const {
	return (this->fp_val >> this->const_val);
}

std::ostream&	operator<<(std::ostream &obj, Fixed const &f) {
	obj << f.toFloat();
	return (obj);
}