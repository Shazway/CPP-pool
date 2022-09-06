/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 19:05:26 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/06 21:12:17 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
#include "Colors.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(MateriaSource const& m_source);
	virtual ~MateriaSource();
	MateriaSource& operator=(MateriaSource const& m_source);
	AMateria*	getMateria(int index) const;
	void		learnMateria(AMateria* materia);
	AMateria*	createMateria(std::string const& type);
private:
	AMateria*	_materia[4];
	int			_nbMateria;
};

#endif