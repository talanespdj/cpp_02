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
		static const int	const_val;
		int	value;
	
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& f);
		Fixed& operator=(const Fixed& f);

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif