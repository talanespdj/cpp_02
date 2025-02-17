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
		static const int	const_val = 8;
		int	fp_val;
	
	public:
		Fixed();
		~Fixed();
		Fixed(const int val);
		Fixed(const float val);
		Fixed(const Fixed& f);
		Fixed& operator=(const Fixed& f);
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		
		bool operator>(const Fixed& f);
		bool operator<(const Fixed& f);
		bool operator>=(const Fixed& f);
		bool operator<=(const Fixed& f);
		bool operator==(const Fixed& f);
		bool operator!=(const Fixed& f);

		Fixed operator+(const Fixed& f) const;
		Fixed operator-(const Fixed& f) const;
		Fixed operator*(const Fixed& f) const;
		Fixed operator/(const Fixed& f) const;

		Fixed& min(Fixed& f1, Fixed& f2);
		const Fixed& min(const Fixed& f1, const Fixed& f2);
		Fixed& max(Fixed& f1, Fixed& f2);
		const Fixed& max(const Fixed& f1, const Fixed& f2);

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int	toInt(void) const;
};

std::ostream&	operator<<(std::ostream &obj, Fixed const &f);

#endif