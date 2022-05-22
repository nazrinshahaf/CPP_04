/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazrinshahaf <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:12:50 by nazrinsha         #+#    #+#             */
/*   Updated: 2022/05/22 11:37:07 by nazrinsha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Character.hpp"
#include "colours.h"

using	std::string;
using	std::cout;
using	std::endl;

Character::Character()
{
	cout << GREEN "Character Defualt Constructor called" RESET << endl;
	setName("");
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_inventory_count = 0;
}

Character::Character(string const name)
{
	cout << GREEN "Character Constructor called" RESET << endl;
	setName(name);
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_inventory_count = 0;
}

Character::~Character(void)
{
	cout << RED "Character Destructor called" RESET << endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			this->_inventory[i] = NULL;
	}
}

Character::Character(Character const &tocopy)
{
	cout << GREEN "Character Copy Constructor called" RESET << endl;
	setName(tocopy.getName());
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = tocopy._inventory[i];
		if (this->_inventory[i])
			this->_inventory_count++;
	}
}

Character	&Character::operator=(Character const &tocopy)
{
	cout << GREEN "Character Copy Assignment Operator called" RESET << endl;
	setName(tocopy.getName());
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = tocopy._inventory[i];
		if (this->_inventory[i])
			this->_inventory_count++;
	}
	return (*this);
}

void			Character::equip(AMateria *material)
{
	if (this->_inventory_count < 4)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i] == NULL)
			{
				this->_inventory[i] = material;
				this->_inventory_count++;
				cout << BLUE "<" << this->getName() << "> " RESET "has equipped" 
					MAGENTA " <" << material->getType() << "> " RESET "in slot [" << i << "]" << endl;
				return ;
			}
		}
	}
	cout << BLUE "<" << this->getName() << ">'s " RESET "inventory is full" << endl;
}

void			Character::unequip(int id)
{
	if (this->_inventory[id] != NULL)
	{
		cout << BLUE "<" << this->getName() << "> " RESET "has unequipped" 
			MAGENTA " <" << this->_inventory[id]->getType() << "> " RESET "from slot [" << id << "]" << endl;
		this->_inventory[id] = NULL;
		this->_inventory_count--;
		return ;
	}
	cout << BLUE "<" << this->getName() << ">'s " RESET "has nothing in slot ["<< id << "]" << endl;
}

void			Character::use(int id, ICharacter &target)
{
	if (id >= 4)
	{
		cout << BLUE "<" << this->getName() << "> " RESET
			"does not even have that many inventory slots" << endl;
		return ;
	}
	if (this->_inventory[id])
	{
		cout << BLUE "<" << this->getName() << "> " RESET "uses "
			MAGENTA "<" << this->_inventory[id]->getType() << "> " RESET "on "
			RED "<" << target.getName() << "> " RESET << endl;
	}
	else
	{
		cout << BLUE "<" << this->getName() << "> " RESET 
			"has nothing in inventory slot id" << endl;
	}
}

void			Character::listInventory(void) const
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			cout << BLUE "<" << this->getName() << "> " RESET "has" 
				MAGENTA " <" << _inventory[i]->getType() << "> " RESET "equipped in in slot [" << i << "]" << endl;
		else
			cout << BLUE "<" << this->getName() << "> " RESET "has" 
				MAGENTA " <None> " RESET "equipped in in slot [" << i << "]" << endl;
	}
}

const string	&Character::getName(void) const
{
	return (this->_name);
}

void			Character::setName(string const name)
{
	this->_name = name;
}

