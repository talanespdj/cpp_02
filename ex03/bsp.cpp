/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 00:26:37 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/19 00:26:46 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"

///demi plan d'inequation

/// @return True if point is inside abc, False if it is on the edge or outside
bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed	ab;
	Fixed	bc;
	Fixed	ca;

	ab = ( a.getX() - point.getX() ) * ( b.getY() - point.getY() ) \
		- ( a.getY() - point.getY()) * ( b.getX() - point.getX() );
	bc = ( b.getX() - point.getX() ) * ( c.getY() - point.getY() ) \
		- ( b.getY() - point.getY()) * ( c.getX() - point.getX() );
	ca = ( c.getX() - point.getX() ) * ( a.getY() - point.getY() ) \
		- ( c.getY() - point.getY()) * ( a.getX() - point.getX() );
	if ((ab < 0 && bc < 0 && ca < 0) || (ab > 0 && bc > 0 && ca > 0))
		return ( true );
	return (false);
}





