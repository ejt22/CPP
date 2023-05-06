/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:27:35 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/23 12:05:42 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class AMateria; // if not declared, does not compile

class ICharacter {

	public:

		virtual ~ICharacter() {} 
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria * m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif

/* We need a virtual destructor here in case we declare ICharacter *p = new Character 
(Character deriving from ICharacter) and then delete p because this will use 
Icharacter::~ICharacter() destructor not the destructor of Character. */