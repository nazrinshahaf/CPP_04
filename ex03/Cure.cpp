/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazrinshahaf <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:30:31 by nazrinsha         #+#    #+#             */
/*   Updated: 2022/06/16 11:28:32 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Cure.hpp"
#include "ICharacter.hpp"

#include "colours.h"

using	std::string;
using	std::cout;
using	std::endl;

Cure::Cure(): AMateria("cure")
{
	cout << GREEN "Cure Constructor called" RESET << endl;
}

Cure::~Cure()
{
	cout << RED "Cure Destructor called" RESET << endl;
}

Cure::Cure(Cure const &tocopy): AMateria("cure")
{
	cout << BLUE "Cure Copy Constructor called" RESET << endl;
	this->_type = tocopy.getType();
}

Cure	&Cure::operator=(Cure const &tocopy)
{
	this->_type = tocopy.getType();
	return (*this);
}

void		Cure::use(ICharacter &target)
{
	cout << "heals " MAGENTA "<" << target.getName() 
		<< ">'s " RESET "wounds" << endl;
}

AMateria	*Cure::clone() const
{
	return (new Cure());
}
