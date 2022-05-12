/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:08:02 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/12 15:17:10 by nfernand         ###   ########.fr       */
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
		_ideas[i] = "something something " + std::to_string(i);
}

Brain::~Brain()
{
	cout << MAGENTA "<Brain> " RED "Destructor called" RESET << endl;
}

void	Brain::sayIdeas() const
{
	for (int i = 0; i < 100; i++)
		cout << YELLOW << _ideas[i] << RESET << endl;
}
