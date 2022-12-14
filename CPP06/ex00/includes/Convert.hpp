/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:52:05 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/09 19:06:27 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <limits>
#include <float.h>
#include <stdlib.h>
#include <cmath>
#include <cerrno>


bool	isChar(std::string str);
bool	isInt(std::string str);
bool	isFloat(std::string str);
bool	isDouble(std::string str);
int		printChar(char nb);
int		printInt(int nb);
int		printFloat(float nb);
int		printDouble(double nb);

#endif