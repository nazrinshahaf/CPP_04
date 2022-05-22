/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazrinshahaf <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:07:48 by nazrinsha         #+#    #+#             */
/*   Updated: 2022/05/20 13:22:49 by nazrinsha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <string>

#include "AMateria.hpp"

using	std::string;

class	Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const &tocopy);
		virtual ~Ice();

		Ice					&operator=(Ice const &tocopy);

		virtual void		use(ICharacter &target);
		virtual AMateria	*clone() const;

	private:
};

#endif
