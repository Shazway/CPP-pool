/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:52:50 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/03 12:26:44 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my boorgir. "
	<< "I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money."
	<< "You didn’t put enough bacon in my burger!"
	<< "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free."
	<< "I’ve been coming for years whereas you started working here since last month." << std::endl;
	
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{	
	for (int i = 0; i < 4; i++)
		if (harl_[i].level == level)
			(this->*harl_[i].ft)();
	return ;
}

Harl::Harl()
{
	HarlTab fct_tab[4] = {{"DEBUG", &Harl::debug}, {"INFO", &Harl::info},
						{"WARNING", &Harl::warning}, {"ERROR", &Harl::error}};
	for (int i = 0; i < 4; i++)
		this->harl_[i] = fct_tab[i];
	return ;
}

Harl::~Harl(){
	return ;
}
