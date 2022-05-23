/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:38:34 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/23 12:53:29 by nazrinsha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class	Dog: public	Animal
{
	public:
		Dog();
		Dog(Dog const &tocopy);
		~Dog();

		Dog		&operator=(Dog const &tocopy);
		void	makeSound()	const;

	private:
};

#endif
