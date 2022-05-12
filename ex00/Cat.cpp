/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:45:47 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/12 13:36:06 by nfernand         ###   ########.fr       */
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

void	Cat::makeSound() const 
{
	cout << "<" BLUE << this->getType() << RESET "> goes " MAGENTA "meow" RESET << endl;
}
