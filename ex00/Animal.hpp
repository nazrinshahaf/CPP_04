/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:08:34 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/23 12:46:45 by nazrinsha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

using	std::string;

class	Animal
{
	public:
		Animal();
		Animal(Animal const &tocopy);
		virtual	~Animal();

		Animal			&operator=(Animal const &tocopy);
		virtual void	makeSound() const;

		void	setType(const string type);
		string	getType() const;

	private:
		string	_type;
};

#endif
