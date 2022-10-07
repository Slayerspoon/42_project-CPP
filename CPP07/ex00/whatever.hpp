/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:27:56 by aionescu          #+#    #+#             */
/*   Updated: 2022/07/21 20:42:31 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP "whatever.hpp"

template <typename T>
void	swap(T &arg1, T &arg2)
{
	T	temp = arg1;
	arg1 = arg2;
	arg2 = temp;
}

template <typename T>
T	min(T arg1, T arg2)
{
	if (arg1 < arg2)
		return (arg1);
	else
		return (arg2);
}

template <typename T>
T	max(T arg1, T arg2)
{
	if (arg1 > arg2)
		return (arg1);
	else
		return (arg2);
}

#endif
