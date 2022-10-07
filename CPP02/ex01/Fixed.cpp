/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:50:57 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/08 20:19:56 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fp_num_val = 0;
}

Fixed::Fixed(const Fixed &original)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fp_num_val = original.getRawBits();
}

Fixed::Fixed(const int input_int)
{
	std::cout << "Int constructor called" << std::endl;
	this->fp_num_val = (input_int << this->fractional_bits);
}

Fixed::Fixed(const float input_float)
{
	std::cout << "Float constructor called" << std::endl;
	this->fp_num_val = (int)(roundf(input_float * (1 << this->fractional_bits)));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (Fixed::fp_num_val);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fp_num_val = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->fp_num_val) / (float)(1 << this->fractional_bits));
}

int	Fixed::toInt(void) const
{
	return ((this->fp_num_val) / (1 << this->fractional_bits));
}

Fixed	&Fixed::operator=(const Fixed &original)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &original)
		return (*this);
	this->fp_num_val = original.getRawBits();
	return (*this);
}

std::ostream&	operator<< (std::ostream& output, const Fixed& fixed)
{
	output << fixed.toFloat();

	return (output);
}
