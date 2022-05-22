/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazrinshahaf <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:28:06 by nazrinsha         #+#    #+#             */
/*   Updated: 2022/05/20 13:30:06 by nazrinsha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
# define CURE_HPP

#include <string>

#include "AMateria.hpp"

using	std::string;

class	Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &tocopy);
		virtual ~Cure();

		Cure				&operator=(Cure const &tocopy);

		virtual void		use(ICharacter &target);
		virtual AMateria	*clone() const;

	private:
};

#endif
