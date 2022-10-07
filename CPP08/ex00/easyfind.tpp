/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 21:58:36 by aionescu          #+#    #+#             */
/*   Updated: 2022/08/01 22:11:00 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
typename T::iterator	easyfind(T &container, int num)
{
	typename T::iterator	result = std::find(container.begin(), container.end(), num);
	if (result == container.end())
		throw NotFoundInContainerException();// return container.end();
	return result;
}

const char	NotFoundInContainerException::what() const throw()
{
	return ("NotFoundInContainerException: The iterator has reached the end of the container without finding the specified value!");
}
