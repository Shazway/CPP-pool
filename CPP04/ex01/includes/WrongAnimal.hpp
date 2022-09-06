/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:06:38 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/06 15:39:15 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &copy);
	WrongAnimal(std::string name);
	virtual ~WrongAnimal();
	WrongAnimal & operator=(const WrongAnimal &assign);
	std::string getType() const;
	void makeSound() const;
protected:
	std::string _type;
};

#endif