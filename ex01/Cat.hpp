/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:43:51 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/18 18:03:12 by nazrinsha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat: public Animal
{
	public:
		Cat();
		~Cat();
		Cat(Cat const &tocopy);

		Cat		&operator=(Cat const &tocopy);
		void	makeSound()	const;
		Brain	*getBrain() const;

	private:
		Brain	*_brain;

};

#endif
