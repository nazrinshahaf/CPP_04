/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazrinshahaf <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 11:37:42 by nazrinsha         #+#    #+#             */
/*   Updated: 2022/06/16 11:04:41 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <string>

#include "AMateria.hpp"

class	IMateriaSource
{
	public:
		virtual ~IMateriaSource() {};
		virtual void 		learnMateria(AMateria *materia) = 0;
		virtual AMateria*	createMateria(std::string const & type) = 0;

		virtual void		listMateria(void) const = 0;
};

#endif
