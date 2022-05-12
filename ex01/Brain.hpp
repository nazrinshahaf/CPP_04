/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:08:11 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/12 15:07:35 by nfernand         ###   ########.fr       */
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

		void	sayIdeas() const;

	private:
		string	_ideas[100];

};

#endif
