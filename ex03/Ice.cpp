/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazrinshahaf <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:15:05 by nazrinsha         #+#    #+#             */
/*   Updated: 2022/06/16 11:28:42 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Ice.hpp"
#include "ICharacter.hpp"

#include "colours.h"

using	std::string;
using	std::cout;
using	std::endl;

Ice::Ice(): AMateria("ice")
{
	cout << GREEN "Ice Constructor called" RESET << endl;
}

Ice::~Ice()
{
	cout << RED "Ice Destructor called" RESET << endl;
}

Ice::Ice(Ice const &tocopy): AMateria("ice")
{
	cout << BLUE "Ice Copy Constructor called" RESET << endl;
	this->_type = tocopy.getType();
}

Ice	&Ice::operator=(Ice const &tocopy)
{
	this->_type = tocopy.getType();
	return (*this);
}

void		Ice::use(ICharacter &target)
{
	cout << "shoots an" BLUE " <ice bolt> " RESET 
		"at " MAGENTA "<" << target.getName() << "> " RESET << endl;
}

AMateria	*Ice::clone() const
{
	return (new Ice());
}
