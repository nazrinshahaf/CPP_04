/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:08:34 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/15 11:04:53 by nfernand         ###   ########.fr       */
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
		virtual	~Animal();

		void	makeSound() const;

		void	setType(const string type);
		string	getType() const;

	protected:
		string	_type;
};

#endif
