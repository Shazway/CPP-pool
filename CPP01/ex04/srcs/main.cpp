/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:37:21 by tmoragli          #+#    #+#             */
/*   Updated: 2022/08/31 17:21:46 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replace_words(std::string *line, char *s1, char *s2)
{
	std::string	str1(s1);
	std::string	str2(s2);
	size_t		index;

	index = 0;
	while (line->find(str1) != std::string::npos)
	{
		index = line->find(str1);
		line->erase(index, str1.size());
		line->insert(index, str2);
	}
}

int	main(int ac, char **av)
{
	std::ifstream	file;
	std::ofstream	new_file;
	std::string		line;

	if (ac != 4)
	{
		std::cout << "Wrong number of arguments\nUsage: ./SIFL \"./filepath\" \"array1\" \"array2\"" << std::endl;
		return (1);
	}
	std::string		filename(av[1]);
	filename += ".replace";
	file.open(av[1], std::ios_base::in);
	if (!file.is_open())
	{
		std::cout << "Failed to open given file" << std::endl;
		return (1);
	}
	new_file.open(filename.c_str(), std::ios::app);
	if (!new_file.is_open())
	{
		file.close();
		std::cout << "Failed to open a new file" << std::endl;
		return (1);
	}
	while (std::getline(file, line))
	{
		if (line.find(av[2]) != std::string::npos)
			replace_words(&line, av[2], av[3]);
		new_file << line << "\n";
		line.clear();
	}
	new_file.close();
	file.close();
	return (0);
}