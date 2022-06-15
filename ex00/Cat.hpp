/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:43:51 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/15 10:40:51 by nfernand         ###   ########.fr       */
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

		Cat				&operator=(Cat const &tocopy);
		virtual void	makeSound()	const;

	private:

};

#endif
