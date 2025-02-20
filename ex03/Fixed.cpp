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
#include <cmath>

Fixed::Fixed() : fp_val(0){
};

Fixed::Fixed(const int val) {
	setRawBits(val << this->const_val);
}

Fixed::Fixed(const float val) {
	this->setRawBits((int)roundf(val * (1 << this->const_val)));
}

Fixed::~Fixed() {
};

Fixed::Fixed(const Fixed& f) {
	*this = f;
}

Fixed&	Fixed::operator=(const Fixed& f) {
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

Fixed	Fixed::operator+(const Fixed& f) const {
	return Fixed(this->toFloat() + f.toFloat());
}
Fixed	Fixed::operator-(const Fixed& f) const {
	return Fixed(this->toFloat() - f.toFloat());
}
Fixed	Fixed::operator*(const Fixed& f) const {
	return Fixed(this->toFloat() * f.toFloat());
}
Fixed	Fixed::operator/(const Fixed& f) const {

	if (f.toFloat() == 0.0f) {
		std::cerr << "Division by zero error" << std::endl;
		exit (EXIT_FAILURE);
	}
	return Fixed(this->toFloat() / f.toFloat());
}

bool	Fixed::operator>(const Fixed& f) {
	return (this->toFloat() > f.toFloat());
}
bool	Fixed::operator<(const Fixed& f) {
	return (this->toFloat() < f.toFloat());
}
bool	Fixed::operator>=(const Fixed& f) {
	return (this->toFloat() >= f.toFloat());
}
bool	Fixed::operator<=(const Fixed& f) {
	return (this->toFloat() <= f.toFloat());
}
bool	Fixed::operator==(const Fixed& f) {
	return (this->toFloat() == f.toFloat());
}
bool	Fixed::operator!=(const Fixed& f) {
	return (this->toFloat() != f.toFloat());
}


Fixed&	Fixed::operator++() {
	this->fp_val++;
	return (*this);
}
Fixed	Fixed::operator++(int) {
	Fixed	tzy = *this;
	
	++(*this);
	return (tzy);
}

Fixed&	Fixed::operator--() {
	this->fp_val--;
	return (*this);
}
Fixed	Fixed::operator--(int) {
	Fixed	tzy = *this;

	--(*this);
	return (tzy);
}


Fixed&	Fixed::min(Fixed& f1, Fixed& f2) {
	if (f1.toFloat() <= f2.toFloat())
		return (f1);
	return (f2);
}
const	Fixed& Fixed::min(const Fixed& f1, const Fixed& f2) {
	if (f1.toFloat() <= f2.toFloat())
		return (f1);
	return (f2);
}

Fixed&	Fixed::max(Fixed& f1, Fixed& f2) {
	if (f1.toFloat() >= f2.toFloat())
		return (f1);
	return (f2);
}
const	Fixed& Fixed::max(const Fixed& f1, const Fixed& f2) {
	if (f1.toFloat() >= f2.toFloat())
		return (f1);
	return (f2);
}