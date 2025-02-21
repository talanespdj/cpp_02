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

Point::Point() : x(0.0f), y(0.0f) {
};

Point::Point(float x, float y) : x(x), y(y) {
};

Point::~Point() {
};

Point::Point(const Point& p) : x(p.x), y(p.y) {
	*this = p;
}

Point&	Point::operator=(const Point& p) {
	if (this != &p) {
		const_cast<Fixed&>(x) = p.x;
		const_cast<Fixed&>(y) = p.y;
	}
	return (*this);
}

Fixed const&	Point::getX() const {
	return (this->x);
}

Fixed const&	Point::getY() const {
	return (this->y);
}

