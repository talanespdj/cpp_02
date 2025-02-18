/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 05:48:51 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/07 05:51:22 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"
#include <cmath>

Point::Point() {
	std::cout << "Point constructor called" << std::endl;
	this->x.setRawBits(0);
	this->y.set= 0;
};

Point::~Point() {
	std::cout << "Point Deconstructor called" << std::endl;
};

Point::Point(const Point& p) {
	std::cout << "Point Copy constructor called" << std::endl;
	*this = p;
}

Point&	Point::operator=(const Point& p) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &p) {
		this->x = p.x;
		this->y = p.y;
	}
	return (*this);
}

