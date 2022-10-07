/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:48:10 by aionescu          #+#    #+#             */
/*   Updated: 2022/04/17 17:03:48 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string	filename = argv[1];
		std::string	s1 = argv[2];
		std::string	s2 = argv[3];

		std::ifstream filein(filename);
		if (filein != 0)
		{
			std::ofstream	fileout(filename + ".replace");
			std::string		finalString;
			std::string		temp;
			while (filein >> temp)
			{
				finalString = finalString + temp + " ";
			}
			finalString.erase(finalString.length() - 1, 1);

			size_t			index = 0;
			while (index < finalString.size())
			{
				if (finalString.find(s1, index) == std::string::npos)
					break;
				index = finalString.find(s1, index);
				finalString.erase(index, s1.length());
				finalString.insert(index, s2);
				index = index + s2.size();
			}

			fileout << finalString;

			filein.close();
			fileout.close();
		}
		else
		{
			std::cout << "Invalid filename provided." << std::endl;
		}
	}
	else
	{
		std::cout << "Invalid number of arguments provided." << std::endl;
	}
	return 0;
}
