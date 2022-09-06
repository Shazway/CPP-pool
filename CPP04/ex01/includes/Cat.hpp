/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:32:14 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/06 15:41:55 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
public:
	Cat();
	Cat(const Cat &copy);
	virtual ~Cat();
	void		makeSound(void) const;
	std::string	getIdea(int index) const;
	void		setIdea(int index, std::string idea);
	Brain		*getBrain()	const;
	Cat & operator=(const Cat &assign);
private:
	Brain	*_catBrain;
};

#endif