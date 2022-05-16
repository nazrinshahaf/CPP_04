/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:45:47 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/16 13:30:35 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Cat.hpp"
#include "colours.h"

using	std::string;
using	std::endl;
using	std::cout;

Cat::Cat()
{
	cout << GREEN "Cat Constructor called" RESET << endl;
	setType("Cat");
	this->_brain = new Brain();
}

Cat::~Cat()
{
	cout << RED "Cat Destructor called" RESET << endl;
	delete this->_brain;
}

Cat::Cat(Cat const &tocopy)
{
	Cat		*res = new Cat();
	cout << BLUE "Cat Copy Constructor called" RESET << endl;
	*this = tocopy;
	return ;
}

Cat		&Cat::operator=(Cat const &tocopy)
{
	cout << BLUE "Cat Assignment Operator called" RESET << endl;
	this->setType(tocopy.getType());
	this->_brain = tocopy.getBrain();
	return (*this);
}

Brain	*Cat::getBrain() const
{
	return (this->_brain);
}

void	Cat::makeSound() const 
{
	cout << "<" BLUE << this->getType() << RESET "> goes " MAGENTA "meow" RESET << endl;
}
