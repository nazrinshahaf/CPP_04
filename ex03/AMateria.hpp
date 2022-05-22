/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazrinshahaf <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:36:00 by nazrinsha         #+#    #+#             */
/*   Updated: 2022/05/20 13:22:52 by nazrinsha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>

using	std::string;

class	ICharacter;

class	AMateria
{
    public:
		AMateria(string const &type);
		AMateria(AMateria const &tocopy);
		virtual ~AMateria();

		AMateria			&operator=(AMateria const &tocopy);

		const string 		&getType(void) const;
		void 				setType(string const type);

		virtual void		use(ICharacter &target);
		virtual AMateria	*clone() const = 0;

	protected:
		string		_type;
};

#endif
