/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:45:47 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/23 12:54:48 by nazrinsha        ###   ########.fr       */
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
}

Cat::~Cat()
{
	cout << RED "Cat Destructor called" RESET << endl;
}

Cat::Cat(Cat const &tocopy)
{
	cout << GREEN "Cat Copy Constructor called" RESET << endl;
	setType(tocopy.getType());
}

Cat		&Cat::operator=(Cat const &tocopy)
{
	cout << GREEN "Cat Copy Assignment Operator called" RESET << endl;
	setType(tocopy.getType());
	return (*this);
}

void	Cat::makeSound() const 
{
	cout << "<" BLUE << this->getType() << RESET "> goes " MAGENTA "meow" RESET << endl;
}
