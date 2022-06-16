/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazrinshahaf <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 12:03:18 by nazrinsha         #+#    #+#             */
/*   Updated: 2022/06/16 14:37:03 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "MateriaSource.hpp"
#include "colours.h"

using	std::string;
using	std::cout;
using	std::endl;

MateriaSource::MateriaSource()
{
	cout << GREEN "MateriaSource Defualt Constructor called" << endl;
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
	this->_materia_count = 0;
}

MateriaSource::~MateriaSource()
{
	cout << RED "MateriaSource Destructor called" << endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
}

MateriaSource::MateriaSource(MateriaSource const &tocopy)
{
	cout << GREEN "MateriaSource Copy Constructor called" << endl;
	this->_materia_count = 0;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
		if (tocopy._materias[i])
		{
			this->_materias[i] = tocopy._materias[i]->clone();
			this->_materia_count++;
		}
		else
			this->_materias[i] = NULL;
	}
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &tocopy)
{
	cout << GREEN "MateriaSource Copy Assignment Operator called" << endl;
	this->_materia_count = 0;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
		if (tocopy._materias[i])
		{
			this->_materias[i] = tocopy._materias[i]->clone();
			this->_materia_count++;
		}
		else
			this->_materias[i] = NULL;
	}
	return (*this);
}

void			MateriaSource::learnMateria(AMateria *materia)
{
	if (this->_materia_count == 4)
	{
		cout << "MateriaSource is too full to learn materia of type " 
			MAGENTA "<" << materia->getType() << ">" RESET << endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] == NULL)
		{
			this->_materias[i] = materia->clone();
			cout << "Materia of type " MAGENTA "<" << materia->getType() << "> "
				RESET << "has been learnt" << endl;
			this->_materia_count++;
			return ;
		}
	}
}

AMateria		*MateriaSource::createMateria(string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			if (this->_materias[i]->getType() == type)
				return (this->_materias[i]->clone());
	}
	return (NULL);
}

void			MateriaSource::listMateria(void) const
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			cout << "MateriaSource has" MAGENTA " <" << _materias[i]->getType() 
				<< "> " RESET "equipped in in slot [" << i << "]" << endl;
		else
			cout << "MateriaSource has" MAGENTA " <None> " RESET 
				"equipped in in slot [" << i << "]" << endl;
	}
}
