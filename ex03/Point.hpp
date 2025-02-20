/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 05:47:38 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/07 20:25:02 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point {
	private:
		const Fixed	x;
		const Fixed	y;
	
	public:
		Point();
		Point(float const x, float const y);
		~Point();
		Point(const Point& p);
		Point& operator=(const Point& p);

		Fixed const& getX() const;
		Fixed const& getY() const;

};

bool	bsp(const Point& a, const Point& b, const Point& c, const Point& point);

#endif
