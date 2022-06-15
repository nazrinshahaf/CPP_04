/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:26:01 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/15 13:54:23 by nazrinsha        ###   ########.fr       */
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
	//cout << CYAN "[Impleenting PDF's requirement]" RESET << endl;
	//{
	//	Animal	*animal_array[10];

	//	for (int i = 0; i < 10; i++)
	//	{
	//		if (i < 5)
	//			animal_array[i] = new Dog();
	//		else
	//			animal_array[i] = new Cat();
	//	}

	//	cout << endl;

	//	for (int i = 0; i < 10; i++)
	//		cout << "type " << i << ":" YELLOW " <" << animal_array[i]->getType() << ">" RESET << endl;

	//	cout << endl;

	//	for (int i = 0; i < 10; i++)
	//		delete animal_array[i];

	//	//system("leaks Animal");
	//	//return 0;
	//}
	//cout << endl;

	//cout << CYAN "[Impleenting PDF's requirement]" RESET << endl;
	//{
	//	const Animal* j = new Dog();
	//	const Animal* i = new Cat();

	//	delete j;//should not create a leak
	//	delete i;
	//	system("leaks Animal");
	//	return 0;
	//}

	cout << CYAN "[Testing to see if brain is a deep copy or shallow copy]" RESET << endl;
	{
		Cat		*ori = new Cat();
		Cat		*copy = new Cat(*ori);
		cout << endl;

		cout << MAGENTA "Printing out address and type for ori and copy..." RESET << endl;
		cout << "ori brain address: " BLUE "<" << ori->getBrain() << ">" RESET << endl;
		cout << "copy brain address: " BLUE "<" << copy->getBrain() << ">" RESET << endl;
		cout << "ori brain type: " BLUE "<" << ori->getType()<< ">" RESET << endl;
		cout << "copy brain type: " BLUE "<" << copy->getType()<< ">" RESET << endl;
		cout << endl;

		cout << MAGENTA "Changing Copy Type to \"fake cat\"..." RESET << endl;
		copy->setType("fake cat");
		cout << endl;

		cout << MAGENTA "Printing out type of ori and copy..." RESET << endl;
		cout << "ori brain type: " BLUE "<" << ori->getType()<< ">" RESET << endl;
		cout << "copy brain type: " BLUE "<" << copy->getType()<< ">" RESET << endl;
		cout << endl;

		cout << MAGENTA "Deleting ori cat..." RESET << endl;
		delete ori;

		cout << MAGENTA "Printing out ideas..." RESET << endl;
		copy->getBrain()->sayIdeas();

		delete copy;
	}
	cout << endl;
}
