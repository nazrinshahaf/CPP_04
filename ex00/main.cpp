/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:26:01 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/15 10:58:46 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include "colours.h"

using	std::string;
using	std::endl;
using	std::cout;

int	main()
{
	cout << CYAN "[Testing out makeSound function]" RESET << endl;
	{
		Animal	*animal = new Animal();
		Animal	*cat = new Cat();
		Animal	*dog = new Dog();
	
		cout << "Animal type: <" BLUE << animal->getType() << RESET ">" << endl;
		cout << "Cat type: <" BLUE << cat->getType() << RESET  ">" << endl;
		cout << "Dog type: <" BLUE << dog->getType() << RESET  "> " << endl;
	
		animal->makeSound();
		cat->makeSound();
		dog->makeSound();
	
		delete dog;
		delete cat;
		delete animal;
	}
	cout << endl;

	cout << CYAN "[Testing out Destructor order]" RESET << endl;
	{
		Animal	*dog = new Dog();

		delete dog;
	}
	cout << endl;

	cout << CYAN "[Testing out PDF's main]" RESET << endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
	
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
	
		delete i;
		delete j;
		delete meta;
	}
	cout << endl;
	

	cout << CYAN "[Testing out WrongAnimal and WrongCat]" RESET << endl;
	{
		WrongAnimal	*wa = new WrongAnimal();
		WrongAnimal	*wc = new WrongCat();

		cout << "Animal type: <" BLUE << wa->getType() << RESET ">" << endl;
		cout << "Cat type: <" BLUE << wc->getType() << RESET  ">" << endl;

		wa->makeSound();
		wc->makeSound();

		delete wc;
		delete wa;
	}
	return 0;
}


