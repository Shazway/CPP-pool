/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:30:54 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/05 17:42:30 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
public:
	Animal();
	Animal(const Animal &copy);
	Animal(std::string name);
	virtual ~Animal();
	Animal & operator=(const Animal &assign);
	std::string getType() const;
	virtual void makeSound() const;
	virtual	std::string getIdea();
	virtual	void setIdea();
protected:
	std::string _type;
};

#endif