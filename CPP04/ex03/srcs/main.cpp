/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:10:36 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/06 23:24:37 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Colors.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

void	print_separator(void)
{
	std::cout << "\e[1;37m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\e[0m" << std::endl;
}

int	main(void) 
{
	ICharacter*	toto = new Character("toto");
	ICharacter*	tata = new Character("tata");
	AMateria*	cure = new Cure();
	AMateria*	cure_clone = cure->clone();
	AMateria*	ice = new Ice();
	AMateria*	ice_clone = ice->clone();
	AMateria*	empty = NULL;

	IMateriaSource*	spellbook = new MateriaSource();
	AMateria*	temp;

	print_separator();
	std::cout << GREEN << "----- Materias tests : -----" << END << std::endl;
	print_separator();

	std::cout << GREEN << toto->getName() << END << std::endl;
	std::cout << GREEN << "Cure = " << cure->getType() << END << std::endl;
	cure->use(*toto);
	std::cout << GREEN << "cure_clone (cure clone) = " << cure_clone->getType()<< END << std::endl;
	cure_clone->use(*toto);
	std::cout << GREEN << "ice = " << ice->getType() << END << std::endl;
	ice->use(*toto);
	std::cout << GREEN << "ice_clone (ice clone) = " << ice_clone->getType() << END << std::endl;
	ice_clone->use(*toto);

	print_separator();
	std::cout << GREEN << "----- MateriaSource tests : -----" << END << std::endl;
	print_separator();

	std::cout << GREEN << "Create materia without learn materia :" << END << std::endl;
	spellbook->createMateria("cure");
	spellbook->learnMateria(empty);
	spellbook->learnMateria(new Ice());
	spellbook->learnMateria(new Cure());
	spellbook->learnMateria(new Cure());
	spellbook->learnMateria(new Cure());
	temp = spellbook->createMateria("ice");
	std::cout << GREEN << "temp->type of createMateria(\"ice\") = " << temp->getType() << END << std::endl;
	delete temp;
	temp = spellbook->createMateria("cure");
	std::cout << GREEN << "temp->type of createMateria(\"cure\") = " << temp->getType() << END << std::endl;
	std::cout << GREEN << "Learn too much materias :" << END << std::endl;
	spellbook->learnMateria(new Cure());
	print_separator();

	std::cout << GREEN << "----- Character tests : -----" << END << std::endl;

	std::cout << GREEN  << "Try to use/unequip without materia and equip 5 materias :" << END << std::endl;
	print_separator();
	toto->unequip(1);
	toto->use(0, *toto);
	toto->equip(empty);
	toto->equip(new Ice());
	toto->equip(new Cure());
	toto->equip(new Ice());
	toto->equip(new Ice());
	toto->equip(new Ice());
	tata->equip(new Cure());
	std::cout << GREEN << "Use the assignment operator : " << END << std::endl;
	std::cout << GREEN <<"Before :" << END<<std::endl;
	std::cout << GREEN <<"toto : " << END<<std::endl;
	toto->use(0, *toto);
	toto->use(1, *toto);
	std::cout << GREEN <<"tata : " << END<<std::endl;
	tata->use(0, *toto);
	tata->use(1, *toto);
	*((Character*) tata) = *((Character*) toto);
	std::cout << GREEN << "After :" << END << std::endl;
	std::cout << GREEN << "toto : " << END << std::endl;
	toto->use(0, *toto);
	toto->use(1, *toto);
	std::cout << GREEN << "tata : " << END << std::endl;
	tata->use(0, *toto);
	tata->use(1, *toto);


	delete temp;
	delete toto;
	delete tata;
	delete cure;
	delete cure_clone;
	delete ice;
	delete ice_clone;
	delete spellbook;

	print_separator();
	std::cout << GREEN << "----- Subject tests : -----" << END << std::endl;
	print_separator();

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return (0);
}