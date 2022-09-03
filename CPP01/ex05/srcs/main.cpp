/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:09:07 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/03 12:27:37 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl	Karen;

	Karen.complain("DEBUG");
	Karen.complain("ERROR");
	Karen.complain("DEBUG");
	Karen.complain("INFO");
	Karen.complain("DEBUG");
	Karen.complain("WARNING");
	Karen.complain("DEBUG");
	return (0);
}
