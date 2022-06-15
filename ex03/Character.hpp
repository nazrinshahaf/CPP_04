/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazrinshahaf <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:08:53 by nazrinsha         #+#    #+#             */
/*   Updated: 2022/06/15 17:04:49 by nazrinsha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>

#include "ICharacter.hpp"

using	std::string;

class	Character:	public ICharacter
{
	public:
		Character();
		Character(string const name);
		Character(Character const &tocopy);
		~Character(void);

		Character				&operator=(Character const &tocopy);

		virtual void			equip(AMateria *material);
		virtual void			unequip(int id);
		virtual void			use(int id, ICharacter &target);

		virtual void			listInventory(void) const;
		void					setName(string const name);
		virtual const string 	&getName(void) const;

	private:
		string		_name;
		AMateria	*_inventory[4];
		int			_inventory_count;
};

#endif
