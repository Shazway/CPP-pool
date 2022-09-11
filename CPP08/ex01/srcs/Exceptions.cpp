/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:12:42 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/11 19:37:58 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

const char* Span::TooManyElementsException::what() const throw(){
	return ("Can't add more numbers, already reached maximum size");
}
const char* Span::NotEnoughElementsException::what() const throw(){
	return ("Not enough elements to find a span");
}