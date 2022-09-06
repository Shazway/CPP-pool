/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 19:16:10 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/06 22:22:08 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _nbMateria(0){
	return ;
}

MateriaSource::MateriaSource(MateriaSource const& m_source)
{
	*(this) = m_source;
	return ;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < _nbMateria; i++)
		delete _materia[i];
	return ;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& m_source)
{
	for (int i = 0; i < _nbMateria; i++)
		_materia[i] = m_source.getMateria(i);
	_nbMateria = m_source._nbMateria;
	return (*this);
}

AMateria*	MateriaSource::getMateria(int index) const
{
	if (index >= 0 && index <= _nbMateria)
		return (_materia[index]);
	return (NULL);
}

void	MateriaSource::learnMateria(AMateria* materia)
{
	if (_nbMateria == 4)
	{
		std::cout << RED
		<< "Can't learn this materia, too many learned already"
		<< END << std::endl;
		delete materia;
		return ;
	}
	if (materia == NULL)
	{
		std::cout << RED
		<< "Can't learn this materia, doesn't exist"
		<< END << std::endl;
	}
	else
	{
		_materia[_nbMateria] = materia;
		_nbMateria++;
	}
	return ;
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < _nbMateria; i++)
		if (_materia[i]->getType() == type)
			return (_materia[i]->clone());
	std::cout << RED
	<< "Can't create a materia, no materia exists with this type" << std::endl;
	return (NULL);
}
