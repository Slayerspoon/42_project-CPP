/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:50:57 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/11 18:00:11 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	this->fp_num_val = 0;
}

Fixed::Fixed(const Fixed &original)
{
	// std::cout << "Copy constructor called" << std::endl;
	this->fp_num_val = original.getRawBits();
}

Fixed::Fixed(const int input_int)
{
	// std::cout << "Int constructor called" << std::endl;
	this->fp_num_val = (input_int << this->fractional_bits);
}

Fixed::Fixed(const float input_float)
{
	// std::cout << "Float constructor called" << std::endl;
	this->fp_num_val = (int)(roundf(input_float * (1 << this->fractional_bits)));
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called for object with value " << (this->getRawBits() >> 8) << std::endl;
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (Fixed::fp_num_val);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
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
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this == &original)
		return (*this);
	this->fp_num_val = original.getRawBits();
	return (*this);
}

std::ostream	&operator<< (std::ostream& output, const Fixed& fixed)
{
	output << fixed.toFloat();

	return (output);
}

bool	operator>(const Fixed &left, const Fixed &right)
{
	bool	verdict = false;

	if (left.getRawBits() > right.getRawBits())
		verdict = true;
	else
		verdict = false;
	return (verdict);
}

bool	operator<(const Fixed &left, const Fixed &right)
{
	if (left.getRawBits() < right.getRawBits())
		return (true);
	else
		return (false);
}

bool	operator>=(const Fixed &left, const Fixed &right)
{
	if (left.getRawBits() >= right.getRawBits())
		return (true);
	else
		return (false);
}

bool	operator<=(const Fixed &left, const Fixed &right)
{
	if (left.getRawBits() <= right.getRawBits())
		return (true);
	else
		return (false);
}

bool	operator==(const Fixed &left, const Fixed &right)
{
	if (left.getRawBits() == right.getRawBits())
		return (true);
	else
		return (false);
}

bool	operator!=(const Fixed &left, const Fixed &right)
{
	if (left.getRawBits() != right.getRawBits())
		return (true);
	else
		return (false);
}

Fixed	operator+(Fixed left, Fixed right)
{
	float	result_float = ((float)left.getRawBits() + (float)right.getRawBits());
	Fixed	result_fixed = Fixed(result_float);
	result_fixed.setRawBits(result_fixed.getRawBits() >> 8);

	return (result_fixed);
}

Fixed	operator-(Fixed left, Fixed right)
{
	float	result_float = ((float)left.getRawBits() - (float)right.getRawBits());

	Fixed	result_fixed = Fixed(result_float);
	result_fixed.setRawBits(result_fixed.getRawBits() >> 8);

	return (result_fixed);
}

Fixed	operator*(Fixed left, Fixed right)
{
	float	result_float = ((float)left.getRawBits() * (float)right.getRawBits());

	Fixed	result_fixed = Fixed(result_float);
	result_fixed.setRawBits(result_fixed.getRawBits() >> 16);

	return (result_fixed);
}

Fixed	operator/(Fixed left, Fixed right)
{
	float	result_float = ((float)left.getRawBits() / (float)right.getRawBits());

	Fixed	result_fixed = Fixed(result_float);
	result_fixed.setRawBits(result_fixed.getRawBits());

	return (result_fixed);
}

Fixed	Fixed::operator++()
{
	++(this->fp_num_val);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp_fixed = *this;
	++(this->fp_num_val);
	return (temp_fixed);
}

Fixed	Fixed::operator--()
{
	--(this->fp_num_val);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp_fixed = *this;
	--(this->fp_num_val);
	return (temp_fixed);
}

Fixed	&Fixed::min(Fixed &first, Fixed &second)
{
	if (first.getRawBits() < second.getRawBits())
		return (first);
	else
		return (second);
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first.getRawBits() < second.getRawBits())
		return (first);
	else
		return (second);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second)
{
	if (first.getRawBits() > second.getRawBits())
		return (first);
	else
		return (second);
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first.getRawBits() > second.getRawBits())
		return (first);
	else
		return (second);
}
