/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:08:02 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/17 14:37:58 by nazrinsha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include "colours.h"
#include <iostream>

using	std::string;
using	std::endl;
using	std::cout;

Brain::Brain()
{
	cout << MAGENTA "<Brain> " GREEN "Constructor called" RESET << endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "something something " + std::to_string(i);
}

Brain::~Brain()
{
	cout << MAGENTA "<Brain> " RED "Destructor called" RESET << endl;
}

Brain::Brain(Brain const &tocopy)
{
	cout << BLUE "Brain Copy Constructor called" RESET << endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = tocopy._ideas[i];
}

Brain	&Brain::operator=(Brain const &tocopy)
{
	cout << BLUE "Brain Copy Assignment Operator Called" RESET << endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = tocopy._ideas[i];
	return (*this);
}

void	Brain::sayIdeas() const
{
	for (int i = 0; i < 100; i++)
		cout << YELLOW << _ideas[i] << RESET << endl;
}
