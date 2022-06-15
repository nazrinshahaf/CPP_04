/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:40:28 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/15 11:10:16 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Dog.hpp"
#include "colours.h"

using	std::string;
using	std::endl;
using	std::cout;

Dog::Dog()
{
	cout << GREEN "Dog Constructor called" RESET << endl;
	setType("Dog");
	this->_brain = new Brain();
}

Dog::~Dog()
{
	cout << RED "Dog Destructor called" RESET << endl;
	delete this->_brain;
}

Dog::Dog(Dog const &tocopy)
{
	cout << BLUE "Dog Copy Constructor called" RESET << endl;
	*this = tocopy;
	return ;
}

Dog		&Dog::operator=(Dog const &tocopy)
{
	cout << BLUE "Dog Copy Assignment Operator called" RESET << endl;
	this->setType(tocopy.getType());
	this->_brain = new Brain(*tocopy.getBrain());
	return (*this);
}

Brain	*Dog::getBrain() const
{
	return (this->_brain);
}

void	Dog::makeSound() const
{
	cout << "<" BLUE << this->getType() << RESET "> goes " MAGENTA "woof" RESET << endl;
}
