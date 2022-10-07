/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:21:41 by aionescu          #+#    #+#             */
/*   Updated: 2022/08/01 22:13:41 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP "easyfind.hpp"

# include <iostream>
# include <algorithm>
# include <stdexcept>
// # include <array>
// # include <vector>
// # include <forward_list>
// # include <list>
// # include <deque>
// # include <typeinfo>

// template <typename T>
// struct	is_cont
// {
// 	static const bool verdict = false;
// };

// template <typename T, size_t Alloc>
// struct	is_cont<std::array<T, Alloc> >
// {
// 	static const bool verdict = true;
// };

// template <typename T, typename Alloc>
// struct	is_cont<std::vector<T, Alloc> >
// {
// 	static const bool verdict = true;
// };

// template <typename T>
// struct	is_cont<std::forward_list<T> >
// {
// 	static const bool verdict = true;
// };

// template <typename T>
// struct	is_cont<std::list<T> >
// {
// 	static const bool verdict = true;
// };

// template <typename T>
// struct	is_cont<std::deque<T> >
// {
// 	static const bool verdict = true;
// };

// template <typename T>
// typename T::iterator	easyfind(T &container, int num)//std::__wrap_iter<int *>
// {
// 	typename T::iterator indicator = NULL;
// 	if (is_cont<T>::verdict == true && typeid(container.at(0)) == typeid(int))
// 	{
// 		indicator = std::find(container.begin(), container.end(), num);
// 		return (indicator);
// 	}
// 	else
// 		std::cout << "Error: Container type not supported for searching." << std::endl;
// 	return (indicator);
// }

class NotFoundInContainerException: public std::exception
{
	public:
		virtual const char	*what() const throw()
		{
			return ("NotFoundInContainerException: The iterator has reached the end of the container without finding the specified value!");
		}
};

template <typename T>
typename T::iterator	easyfind(T &container, int num)
{
	typename T::iterator	result = std::find(container.begin(), container.end(), num);
	if (result == container.end())
		throw NotFoundInContainerException();// return container.end();
	return result;
}

#endif
