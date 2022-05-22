/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazrinshahaf <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:06:26 by nazrinsha         #+#    #+#             */
/*   Updated: 2022/05/22 11:29:02 by nazrinsha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <string>

#include "AMateria.hpp"

using	std::string;

class	ICharacter
{
	public:
		virtual ~ICharacter() {};
		virtual string const	&getName() const = 0;
		virtual void			equip(AMateria *material) = 0;
		virtual void 			unequip(int id) = 0;
		virtual void 			use(int id, ICharacter &target) = 0;

		virtual void			listInventory(void) const = 0;
};

#endif
