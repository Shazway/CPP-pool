/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:40:42 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/05 17:56:46 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
public:
	Brain();
	Brain(const Brain &copy);
	~Brain();
	Brain & operator=(const Brain &assign);
	std::string	getIdea(int index) const;
	void		setIdea(int index, std::string idea);
private:
	std::string _ideas[100];
};

#endif