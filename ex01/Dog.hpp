/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:38:34 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/18 18:08:56 by nazrinsha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog: public	Animal
{
	public:
		Dog();
		~Dog();
		Dog(Dog const &tocopy);

		Dog 	&operator=(Dog const &tocopy);
		void	makeSound()	const;
		Brain	*getBrain() const;

	private:
		Brain	*_brain;
};

#endif
