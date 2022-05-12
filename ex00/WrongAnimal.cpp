/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:41:19 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/12 13:59:18 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "colours.h"

#include <iostream>

using	std::string;
using	std::endl;
using	std::cout;

WrongAnimal::WrongAnimal()
{
	cout << GREEN "WrongAnimal Constructor called" RESET << endl;
	setType("WrongAnimal");
}

WrongAnimal::~WrongAnimal()
{
	cout << RED "WrongAnimal Destructor called" RESET << endl;
}

void	WrongAnimal::makeSound() const
{
	cout << "<" BLUE << this->getType() << RESET "> goes " MAGENTA "???" RESET << endl;
}

void	WrongAnimal::setType(const string type)
{
	this->_type = type;
}

string	WrongAnimal::getType() const
{
	return (this->_type);
}
