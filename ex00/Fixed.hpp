/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 05:47:38 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/07 20:25:02 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed {
	private:

	
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed&);

		int	Fixed::getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
