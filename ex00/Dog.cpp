/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:40:28 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/23 12:54:41 by nazrinsha        ###   ########.fr       */
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
}

Dog::~Dog()
{
	cout << RED "Dog Destructor called" RESET << endl;
}

Dog::Dog(Dog const &tocopy)
{
	cout << GREEN "Dog Copy Constructor called" RESET << endl;
	setType(tocopy.getType());
}

Dog		&Dog::operator=(Dog const &tocopy)
{
	cout << GREEN "Dog Copy Assignment Operator called" RESET << endl;
	setType(tocopy.getType());
	return (*this);
}
void	Dog::makeSound() const
{
	cout << "<" BLUE << this->getType() << RESET "> goes " MAGENTA "woof" RESET << endl;
}
