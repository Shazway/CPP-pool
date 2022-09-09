/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:19:37 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/09 21:25:17 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "Data.hpp"

uintptr_t	serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}
Data*	deserialize(uintptr_t rawbits){
	return (reinterpret_cast<Data*>(rawbits));
}

int	main()
{
	Data	d1(42);
	Data*	d2;
	uintptr_t	test;

	test = serialize(&d1);
	d2 = deserialize(test);
	std::cout << "d1 = " << &d1 << ", val = " << d1.getNb() << std::endl;
	std::cout << "d2 = " << d2 << ", val = " << d2->getNb() << std::endl;
	return (0);
}