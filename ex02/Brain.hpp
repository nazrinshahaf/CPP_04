/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:08:11 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/17 11:50:46 by nazrinsha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

using	std::string;

class	Brain
{
	public:
		Brain();
		~Brain();
		Brain(Brain const &tocopy);

		Brain &operator=(Brain const &tocopy);

		void	sayIdeas() const;

	private:
		string	_ideas[100];

};

#endif
