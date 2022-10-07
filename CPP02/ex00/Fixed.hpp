/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:50:49 by aionescu          #+#    #+#             */
/*   Updated: 2022/06/01 21:06:39 by aionescu         ###   ########.fr       */
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
		Fixed &operator=(const Fixed &original);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
