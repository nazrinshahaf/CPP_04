/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:43:51 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/23 12:50:01 by nazrinsha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class	Cat: public Animal
{
	public:
		Cat();
		Cat(Cat const &tocopy);
		~Cat();

		Cat		&operator=(Cat const &tocopy);
		void	makeSound()	const;

	private:

};

#endif
