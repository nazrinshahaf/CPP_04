/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:40:20 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/12 13:59:13 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

using	std::string;

class	WrongAnimal
{
	public:
		WrongAnimal();
		virtual	~WrongAnimal();

		void	makeSound() const;

		void	setType(const string type);
		string	getType() const;

	private:
		string	_type;
};

#endif
