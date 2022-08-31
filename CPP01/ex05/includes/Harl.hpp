/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:51:18 by tmoragli          #+#    #+#             */
/*   Updated: 2022/08/31 18:21:55 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
#include <iostream>

class Harl
{
private:
	typedef void(Harl::*FtHarl)(void);
	struct HarlTab
	{
		std::string level;
		FtHarl	ft;
	};
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
public:
	void	complain(std::string level);
	HarlTab	harl_[4];
	Harl();
	~Harl();
};

#endif