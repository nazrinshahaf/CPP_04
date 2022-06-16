/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazrinshahaf <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:11:33 by nazrinsha         #+#    #+#             */
/*   Updated: 2022/06/16 15:44:37 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#include "colours.h"

using	std::string;
using	std::cout;
using	std::endl;

void	testAMateriaBasicFunctions()
{
	cout << CYAN "[Testing AMateria Basic Functions]" RESET << endl;
	AMateria	*ice = new Ice();
	AMateria	*cure = new Cure();
	cout << endl;

	ICharacter	*me = new Character("me");
	cout << endl;

	cout << MAGENTA "Using AMateria..." RESET << endl;
	ice->use(*me);
	cure->use(*me);
	cout << endl;

	cout << MAGENTA "Cloning and using AMateria..." RESET << endl;
	AMateria	*ice_copy = ice->clone();
	ice_copy->use(*me);
	cout << endl;

	delete ice_copy;
	delete me;
	delete cure;
	delete ice;

	cout << endl;
}

void	testDeepCopyCharacter()
{
	cout << CYAN "[Testing deep copy for Character Copy Assignment Operator...]" RESET << endl;
	{
		AMateria	*ice = new Ice();
		AMateria	*ice2 = new Ice();
		cout << endl;

		Character	*ori = new Character("ori");
		Character	*copy = new Character("copy");
		cout << endl;

		cout << MAGENTA "Filling up 2 invetory slots to ori..." RESET << endl;
		ori->equip(ice2);
		ori->equip(ice2);

		cout << endl;
		ori->listInventory();
		cout << endl;

		cout << MAGENTA "Filling up 1 invetory slot to copy..." RESET << endl;
		copy->equip(ice);
		cout << endl;

		cout << MAGENTA "copy copying ori (to test that copy constructor deleting doesn't leave leaks)..." RESET << endl;
		*copy = *ori;
		cout << endl;

		cout << MAGENTA "Deleting ice materias and ori (to test that the materias in invetories deep copies)..." RESET << endl;
		delete ice2;
		delete ice;
		delete ori;
		cout << endl;

		cout << MAGENTA "Printing out copy inventory..." RESET << endl;
		copy->listInventory();
		cout << endl;

		delete copy;
		system("leaks AMateria");
	}
	cout << endl;
}

void	testCharacterBasicFunctions()
{
	cout << CYAN "[Testing Character Basic Functions]" RESET << endl;
	AMateria	*ice = new Ice();
	AMateria	*cure = new Cure();
	cout << endl;

	ICharacter	*me = new Character("me");
	cout << endl;
	
	cout << MAGENTA "Trying to overfill character invetory..." RESET << endl;
	me->equip(ice);
	me->equip(ice);
	me->equip(cure);
	me->equip(cure);
	me->equip(cure);
	cout << endl;

	me->listInventory();
	cout << endl;

	cout << CYAN "[Trying to use AMateria in character invetory]" RESET << endl;
	ICharacter	*enemy = new Character("enemy");
	cout << endl;

	cout << MAGENTA "Using AMateria on enemy..." RESET << endl;
	me->use(0, *enemy);
	me->use(1, *enemy);
	me->use(2, *enemy);
	me->use(3, *enemy);
	cout << endl;

	cout << MAGENTA "Using out of range id AMateria on enemy..." RESET << endl;
	me->use(4, *enemy);
	me->use(-1, *enemy);
	cout << endl;

	cout << MAGENTA "Using empty id AMateria on enemy..." RESET << endl;
	me->unequip(1);
	me->listInventory();
	me->use(1, *enemy);
	cout << endl;

	cout << MAGENTA "Unequiping empty id slot and out of range id slot..." RESET << endl;
	me->unequip(1);
	me->unequip(5);
	me->unequip(-1);
	cout << endl;

	delete enemy;
	delete me;
	delete cure;
	delete ice;
	cout << endl;
}

void	testDeepCopyMateria()
{
	cout << CYAN "[Testing deep copy for Materia in MateriaSource]" RESET << endl;
	{
		AMateria	*ice = new Ice();
		AMateria	*cure = new Cure();
		cout << endl;

		MateriaSource	*ori = new MateriaSource();
		MateriaSource	*copy = new MateriaSource();
		cout << endl;

		cout << MAGENTA "Learning new Ice Materia and Cure Materia in ori MateriaSource..." RESET << endl;
		ori->learnMateria(ice);
		ori->learnMateria(cure);
		cout << endl;

		ori->listMateria();
		cout << endl;

		cout << MAGENTA "Learning new Materia in copy MateriaSource..." RESET << endl;
		copy->learnMateria(ice);
		copy->learnMateria(cure);
		copy->learnMateria(ice);
		copy->learnMateria(cure);
		cout << endl;

		copy->listMateria();
		cout << endl;

		cout << MAGENTA "Copying ori into copy (testing deep copies)..." RESET << endl;
		*copy = *ori;
		cout << endl;

		cout << MAGENTA "Deleting ice and cure materias and ori (to test that materias in invetory are deep copies)..." RESET << endl;
		delete ori;
		delete cure;
		delete ice;
		cout << endl;

		cout << MAGENTA "Printing out copy inventory..." RESET << endl;
		copy->listMateria();

		delete copy;
		system("leaks AMateria");
	}
	cout << endl;
}

void	testMateriaBasicFunctions()
{
	cout << CYAN "[Testing MateriaSource basic functions]" RESET << endl;
	AMateria		*ice = new Ice();
	AMateria		*cure = new Ice();
	cout << endl;

	IMateriaSource	*source = new MateriaSource();
	cout << endl;

	cout << MAGENTA "Filling source with max materia..." RESET << endl;
	source->learnMateria(ice);
	source->learnMateria(cure);
	source->learnMateria(ice);
	source->learnMateria(cure);
	source->learnMateria(cure);
	source->learnMateria(cure);
	cout << endl;

	cout << MAGENTA "Creating material of AMateria..." RESET << endl;
	AMateria		*new_ice = source->createMateria("ice");
	cout << "Type of new_ice: " BLUE "<" << new_ice->getType() << ">" RESET << endl;
	cout << endl;

	cout << MAGENTA "Using copy of AMateria..." RESET << endl;
	ICharacter		*me = new Character("me");
	new_ice->use(*me);
	delete me;	
	cout << endl;
		
	delete new_ice;
	delete cure;
	delete ice;

	delete source;
	cout << endl;
}

void	testPDFMain()
{
	cout << CYAN "[Testing PDF's Main]" RESET << endl;
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
}

int	main()
{
	testAMateriaBasicFunctions();
	testCharacterBasicFunctions();
	testDeepCopyCharacter();
	testMateriaBasicFunctions();
	testDeepCopyMateria();
//	testPDFMain();
}
