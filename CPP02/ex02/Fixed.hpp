/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:50:49 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/11 16:43:45 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP "Fixed.hpp"

# include <iostream>

class Fixed
{
	private:
		int					fp_num_val;
		static const int	fractional_bits = 8;

	public:
		Fixed();
		Fixed(const Fixed &original);
		Fixed(const int input_int);
		Fixed(const float input_float);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		Fixed	&operator=(const Fixed &original);
		friend std::ostream	&operator<< (std::ostream& out, const Fixed& fixed);
		friend bool	operator>(const Fixed &left, const Fixed &right);
		friend bool	operator<(const Fixed &left, const Fixed &right);
		friend bool	operator>=(const Fixed &left, const Fixed &right);
		friend bool	operator<=(const Fixed &left, const Fixed &right);
		friend bool	operator==(const Fixed &left, const Fixed &right);
		friend bool	operator!=(const Fixed &left, const Fixed &right);
		friend Fixed	operator+(Fixed left, Fixed right);
		friend Fixed	operator-(Fixed left, Fixed right);
		friend Fixed	operator*(Fixed left, Fixed right);
		friend Fixed	operator/(Fixed left, Fixed right);
		Fixed	operator++();
		Fixed	operator++(int);
		Fixed	operator--();
		Fixed	operator--(int);
		static Fixed	&min(Fixed &first, Fixed &second);
		static const Fixed	&min(const Fixed &first, const Fixed &second);
		static Fixed	&max(Fixed &first, Fixed &second);
		static const Fixed	&max(const Fixed &first, const Fixed &second);
};

#endif
