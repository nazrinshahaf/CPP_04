/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:26:01 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/12 19:48:14 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "colours.h"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

using	std::string;
using	std::endl;
using	std::cout;

int	main()
{
	Animal	*animal_array[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			animal_array[i] = new Dog();
		else
			animal_array[i] = new Cat();
	}

	cout << endl;

	for (int i = 0; i < 10; i++)
		cout << "type " << i << ":" YELLOW " <" << animal_array[i]->getType() << ">" RESET << endl;

	cout << endl;

	for (int i = 0; i < 10; i++)
		delete animal_array[i];

	//system("leaks Animal");
	return 0;

	//const Animal* j = new Dog();
	//const Animal* i = new Cat();

	//delete j;//should not create a leak
	//delete i;
	//system("leaks Animal");
	return 0;
}
