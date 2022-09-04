/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:32:14 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/04 22:50:46 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
public:
	Cat();
	Cat(const Cat &copy);
	virtual ~Cat();
	void	makeSound(void) const;
	Cat & operator=(const Cat &assign);
};

#endif