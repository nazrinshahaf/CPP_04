/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:26:01 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/12 14:04:59 by nfernand         ###   ########.fr       */
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
	Animal	*animal = new Animal();
	Cat		*cat = new Cat();
	Dog		*dog = new Dog();

	cout << "Animal type: <" BLUE << animal->getType() << RESET ">" << endl;
	cout << "Cat type: <" BLUE << cat->getType() << RESET  ">" << endl;
	cout << "Dog type: <" BLUE << dog->getType() << RESET  "> " << endl;

	animal->makeSound();
	cat->makeSound();
	dog->makeSound();

	delete dog;
	delete cat;
	delete animal;

	//const Animal* meta = new Animal();
	//const Animal* j = new Dog();
	//const Animal* i = new Cat();

	//std::cout << j->getType() << " " << std::endl;
	//std::cout << i->getType() << " " << std::endl;
	//i->makeSound(); //will output the cat sound!
	//j->makeSound();
	//meta->makeSound();

	//delete i;
	//delete j;
	//delete meta;
	
	return 0;
}

//#include "WrongAnimal.hpp"
//#include "WrongCat.hpp"
//
//int	main()
//{
//	WrongAnimal	*wa = new WrongAnimal();
//	WrongCat	*wc = new WrongCat();
//
//	cout << "Animal type: <" BLUE << wa->getType() << RESET ">" << endl;
//	cout << "Cat type: <" BLUE << wc->getType() << RESET  ">" << endl;
//
//	wa->makeSound();
//	wc->makeSound();
//
//	delete wc;
//	delete wa;
//}
