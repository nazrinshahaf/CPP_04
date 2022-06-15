/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazrinshahaf <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:11:33 by nazrinsha         #+#    #+#             */
/*   Updated: 2022/06/15 17:38:33 by nazrinsha        ###   ########.fr       */
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

int	main()
{
	//AMateria	*ice = new AMateria("ice");
	//AMateria	*copy = new AMateria(*ice);

	//cout << "type of ice: " << ice->getType() << endl;
	//cout << "type of copy: " << copy->getType() << endl;
	//delete ice;
	//cout << "type of copy: " << copy->getType() << endl;
	//delete copy;
	
	//cout << "===================================================" << endl;

	//Character	*dickhead = new Character("dickhead");
	//AMateria	*ice = new AMateria("ice");
	//AMateria	*fire = new AMateria("fire");

	//cout << dickhead->getName() << endl;
	//dickhead->equip(ice);
	//dickhead->equip(ice);
	//dickhead->equip(fire);
	//dickhead->equip(fire);
	//dickhead->equip(fire);

	//dickhead->unequip(0);
	//dickhead->unequip(0);

	//delete fire;
	//delete ice;
	//delete dickhead;
	
	//AMateria	*ice = new Ice();
	//ICharacter	*dickhead = new Character("dickhead");

	//cout << "ice type: " << ice->getType() << endl;

	//ice->use(*dickhead);

	//AMateria	*clone;

	//clone = ice->clone();
	//cout << "ice type: " << ice->getType() << endl;
	//cout << "clone type: " << clone->getType() << endl;
	//cout << "ice addr: " << &ice << endl;
	//cout << "clone addr: " << &clone << endl;

	//delete dickhead;
	//delete ice;

	//cout << "clone type: " << clone->getType() << endl;
	//cout << "clone addr: " << &clone << endl;
	//
	//delete clone;
	
	//AMateria	*cure = new Cure();
	//ICharacter	*dickhead = new Character("dickhead");

	//cout << "cure type: " << cure->getType() << endl;

	//cure->use(*dickhead);

	//AMateria	*clone;

	//clone = cure->clone();
	//cout << "cure type: " << cure->getType() << endl;
	//cout << "clone type: " << clone->getType() << endl;
	//cout << "cure addr: " << &cure << endl;
	//cout << "clone addr: " << &clone << endl;

	//delete dickhead;
	//delete cure;

	//cout << "clone type: " << clone->getType() << endl;
	//cout << "clone addr: " << &clone << endl;
	//
	//delete clone;
	
	//Character		*dickhead = new Character("dickhead");
	//Character		*copy;
	//AMateria		*ice = new Ice();

	//dickhead->equip(ice);
	//dickhead->equip(ice);

	//copy = new Character(*dickhead);

	//delete dickhead;
	//copy->equip(ice);
	//copy->equip(ice);
	//copy->equip(ice);
	//delete ice;
	//delete copy;
	
	//ICharacter		*dickhead = new Character("dickhead");
	//AMateria		*ice = new Ice();
	//AMateria		*cure = new Cure();

	//dickhead->equip(ice);
	//dickhead->equip(ice);
	//dickhead->equip(cure);
	//dickhead->equip(cure);

	//dickhead->listInventory();

	//delete cure;
	//delete ice;
	//delete dickhead;
	
	//Character		dickhead = Character("dickhead");
	//AMateria		*ice = new Ice();
	//Character		copy;

	//copy = dickhead;

	//cout << &dickhead << endl;
	//cout << &copy << endl;

	//dickhead.equip(ice);
	//dickhead.listInventory();
	//copy.setName("copy");
	//copy.listInventory();
	//dickhead.use(0, copy);
	//dickhead.use(1, copy);
	//dickhead.use(5, copy);

	//delete ice;
	
	//IMateriaSource	*source = new MateriaSource();
	//AMateria		*ice = new Ice();
	//AMateria		*cure = new Cure();

	//cout << endl << endl;
	//source->learnMateria(ice);
	//source->learnMateria(ice);
	//source->learnMateria(cure);
	//source->learnMateria(cure);
	//cout << endl << endl;

	//source->listMateria();
	//cout << endl << endl;

	//AMateria		*ice_clone = source->createMateria("ice");
	//cout << ice_clone->getType() << endl;
	//cout << endl << endl;

	//delete ice_clone;
	//delete cure;
	//delete ice;
	//delete source;
	
//	IMateriaSource* src = new MateriaSource(); 
//	
//	src->learnMateria(new Ice()); 
//	src->learnMateria(new Cure());
//	ICharacter* me = new Character("me");
//	AMateria* tmp;
//	tmp = src->createMateria("ice");
//	me->equip(tmp);
//	tmp = src->createMateria("cure");
//	me->equip(tmp);
//	ICharacter* bob = new Character("bob"); me->use(0, *bob);
//    me->use(1, *bob);
//
//	delete bob;
//	delete me;
//	delete src;
//
//	system("leaks AMateria");
//
//	return 0;

	cout << CYAN "[Testing deep copy for Character Copy Constructor...]" RESET << endl;
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
