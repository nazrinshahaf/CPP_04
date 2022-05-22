/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazrinshahaf <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 11:39:36 by nazrinsha         #+#    #+#             */
/*   Updated: 2022/05/22 13:05:59 by nazrinsha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <string>

#include "IMateriaSource.hpp"

using	std::string;

class	MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &tocopy);
		~MateriaSource();

		MateriaSource		&operator=(MateriaSource const &tocopy);
		virtual void		learnMateria(AMateria *materia);
		virtual AMateria 	*createMateria(string const &type);
		
		virtual void		listMateria(void) const;

	private:
		AMateria	*_materias[4];
		int			_materia_count;
};

#endif
