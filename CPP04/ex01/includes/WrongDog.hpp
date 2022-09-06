/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:12:25 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/06 15:39:25 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP
#include "WrongAnimal.hpp"

class WrongDog: public WrongAnimal
{
public:
	WrongDog();
	WrongDog(const WrongDog &copy);
	~WrongDog();
	void	makeSound(void) const;
	WrongDog & operator=(const WrongDog &assign);
};
#endif