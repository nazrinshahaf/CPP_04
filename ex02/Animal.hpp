/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:08:34 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/15 14:12:47 by nazrinsha        ###   ########.fr       */
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
		virtual	~Animal();

		virtual	void	makeSound() const = 0;

		void	setType(const string type);
		string	getType() const;

	protected:
		Animal();

	private:
		string	_type;
};

#endif
