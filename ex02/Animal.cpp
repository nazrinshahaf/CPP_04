/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:10:54 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/15 14:12:57 by nazrinsha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "colours.h"

#include <iostream>

using	std::string;
using	std::endl;
using	std::cout;

Animal::Animal()
{
	cout << GREEN "Animal Constructor called" RESET << endl;
	setType("Animal");
}

Animal::~Animal()
{
	cout << RED "Animal Destructor called" RESET << endl;
}

void	Animal::setType(const string type)
{
	this->_type = type;
}

string	Animal::getType() const
{
	return (this->_type);
}
