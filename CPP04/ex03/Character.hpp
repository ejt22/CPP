/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:04:23 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/13 23:18:55 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter {

	private:
	
		AMateria *	_tab[4];
		std::string	_name;

	public:
		Character( void );
		Character( std::string const name );
		Character( Character const & src );
		~Character( void );

		std::string const &	getName() const;
		void 				equip(AMateria* m);
		void				unequip( int idx );
		void				use( int idx, ICharacter & target );
		AMateria*			getMateriaIdx(int idx);

		Character	& operator=( Character const & rhs );
};

#endif