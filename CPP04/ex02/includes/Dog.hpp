/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 22:37:34 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/05 18:00:41 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
public:
	Dog();
	Dog(const Dog &copy);
	virtual ~Dog();
	void		makeSound(void) const;
	void		setIdea(int index, std::string idea);
	std::string	getIdea(int index) const;
	Brain		*getBrain()	const;
	Dog & operator=(const Dog &assign);
private:
	Brain	*_dogBrain;
};

#endif