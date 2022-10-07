/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aionescu <aionescu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:49:32 by aionescu          #+#    #+#             */
/*   Updated: 2022/08/17 19:51:00 by aionescu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <float.h>

bool	is_valid_input(char *input)
{
	std::string	str = input;
	
	int				digit_count = 0;
	int				minus_count = 0;
	int				plus_count = 0;
	int				dot_count = 0;
	int				f_count = 0;
	unsigned long	index = 0;
	
	while (index < str.length())
	{
		if (str.at(index) == '-')
			minus_count++;
		else if (str.at(index) == '+')
			plus_count++;
		else if (str.at(index) == '.')
			dot_count++;
		else if (str.at(index) == 'f')
			f_count++;
		else if (isdigit(str.at(index)))
			digit_count++;
		else
			return (false);
		if (minus_count > 1 || plus_count > 1 || (minus_count > 0 && plus_count > 0) || dot_count > 1 || f_count > 1)
			return (false);
		index++;
	}
	if ((minus_count > 0 || plus_count > 0) && str.at(1) == '0' && str.length() > 2 && str.at(2) != '.')
		return (false);
	if (str.at(0) == '0' && str.length() > 2 && str.at(1) != '.')
		return (false);
	if (f_count > 0)
	{
		if (str.at(str.length() - 1) != 'f')
			return (false);
		else
			str.erase(str.length() - 1);
	}
	if (dot_count > 0)
	{
		index = 0;
		while (index < str.length())
		{
			if (str.at(index) == '.')
				break;
			index++;
		}
		if (isdigit(str.at(index - 1)) == false)
			return (false);
		if (index == str.length() - 1)
			return (false);
	}
	return (true);
}

bool	handle_special_expression(char *input)
{
	std::string	str = input;
	bool	verdict = false;
	if (str == "-inf" || str == "+inf" || str == "nan" || str == "inf")
	{
		verdict = true;
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << str << "f" << std::endl;
		std::cout << "double: " << str << std::endl;
	}
	else if (str == "-inff" || str == "+inff" || str == "nanf" || str == "inf")
	{
		verdict = true;
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << str << std::endl;
		str.erase(str.length() - 1);
		std::cout << "double: " << str << std::endl;
	}
	return (verdict);
}

void	display_char(char *input)
{
	std::string	str = input;
	if (0.0 <= atof(input) && atof(input) < 128.0)
	{
		if (isprint((char)(atof(input))))
			std::cout << "char: " << (char)(atoi(input)) << std::endl;
		else
			std::cout << "char: not displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
}

void	display_int(char *input)
{
	double	as_double = (atof(input));
	if (as_double < INT32_MIN)
		std::cout << "int: impossible - given value is less than INT32_MIN (-2147483648)" << std::endl;
	else if (INT32_MAX < as_double)
		std::cout << "int: impossible - given value is greater than INT32_MAX (2147483647)" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(atof(input)) << std::endl;
}

void	display_float(char *input)
{
	std::string	str = input;
	if (str == "-0" || str == "-0.0f")
		input++;
	double	as_double = (atof(input));
	double	abs_as_double = as_double;
	if (as_double < 0.0)
		abs_as_double = abs_as_double * -1;
	std::cout << "float: " << static_cast<float>(atof(input)) << "f" << std::endl;
}

void	display_double(char *input)
{
	std::string	str = input;
	if (str == "-0" || str == "-0.0f")
		input++;
	double	as_double = (atof(input));
	double	abs_as_double = as_double;
	if (as_double < 0.0)
		abs_as_double = abs_as_double * -1;
	std::cout << "double: " << (atof(input)) << std::endl;
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (handle_special_expression(argv[1]) == false)
		{
			if (is_valid_input(argv[1]))
			{
				std::string	str = argv[1];
				if (str.at(str.length() - 1) == 'f')
					str.erase(str.length() - 1);
				display_char(argv[1]);
				display_int(argv[1]);
				display_float(argv[1]);
				display_double(argv[1]);
			}
			else
			{
				std::cout << "char: impossible" << std::endl;
				std::cout << "int: impossible" << std::endl;
				std::cout << "float: impossible" << std::endl;
				std::cout << "double: impossible" << std::endl;
			}
		}
	}
	else
		std::cout << "Error: Please only provide exactly one argument." << std::endl;
	return (0);
}
