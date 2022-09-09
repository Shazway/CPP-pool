/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Types.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:51:32 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/09 18:41:34 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

bool	isChar(std::string str)
{
	if (str.size() == 1 && std::isprint(str.at(0)))
		return (true);
	return (false);
}

bool	isInt(std::string str)
{
	char	*end;
	long	overflow_check;

	if (str.find('.') < str.size())
		return (false);
	overflow_check = strtol(str.c_str(), &end, 10);
	if (end[0] != '\0')
		return (false);
	if (overflow_check <= std::numeric_limits<int>::max()
		&& overflow_check >= std::numeric_limits<int>::min())
		return (true);
	return (false);
}

bool	isFloat(std::string str)
{
	char	*end;

	if (str == "nanf" || str == "-inff" || str == "+inff")
		return (true);
	if (str.at(0) == '.' || str.find('.') > str.size() || str.find("f") > str.size())
		return (false);
	strtof(str.c_str(), &end);
	if (errno != 0 || end[0] != 'f' || end[-1] == '.' || end[1] != '\0')
		return (false);
	return (true);
}

bool	isDouble(std::string str)
{
	char	*end;

	if (str == "nan" || str == "-inf" || str == "+inf")
		return (true);
	strtod(str.c_str(), &end);
	if (errno != 0 || str.at(0) == '.' || str.find('.') > str.size()
		|| end[0] != '\0' || end[-1] == '.')
		return (false);
	return (true);
}
