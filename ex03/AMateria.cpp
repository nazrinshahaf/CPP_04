/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazrinshahaf <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:41:45 by nazrinsha         #+#    #+#             */
/*   Updated: 2022/06/15 16:25:49 by nazrinsha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "AMateria.hpp"
#include "ICharacter.hpp"

#include "colours.h"

using	std::string;
using	std::cout;
using	std::endl;

AMateria::AMateria(string const &type)
{
	cout << GREEN "AMateria Assignment Constructor called" RESET << endl;
	setType(type);
}

AMateria::~AMateria()
{
	cout << RED "AMateria Destructor called" RESET << endl;
}

AMateria::AMateria(AMateria const &tocopy)
{
	cout << BLUE "AMateria Copy Constructor called" RESET << endl;
	this->_type = tocopy.getType();
}

AMateria	&AMateria::operator=(AMateria const &tocopy)
{
	this->_type = tocopy.getType();
	return (*this);
}

const string	&AMateria::getType(void) const
{
	return (this->_type);
}

void		AMateria::setType(string const temp)
{
	this->_type = temp;
}

void		AMateria::use(ICharacter &target)
{
	cout << "shoots an" BLUE "<" << this->getType() << ">" RESET 
		"at " MAGENTA "<" << target.getName() << "> " RESET;
}
