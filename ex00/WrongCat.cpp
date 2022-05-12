/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:44:04 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/12 14:03:14 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "WrongCat.hpp"
#include "colours.h"

using	std::string;
using	std::endl;
using	std::cout;

WrongCat::WrongCat()
{
	cout << GREEN "WrongCat Constructor called" RESET << endl;
	setType("WrongCat");
}

WrongCat::~WrongCat()
{
	cout << RED "WrongCat Destructor called" RESET << endl;
}

void	WrongCat::makeSound() const
{
	cout << "<" BLUE << this->getType() << RESET "> goes " MAGENTA "meow" RESET << endl;
}
