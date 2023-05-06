/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 21:39:26 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/21 11:07:13 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap {

	private:

		std::string	_name;

	public:
	
		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap( void );

		DiamondTrap	& operator=( DiamondTrap const & rhs );
		
		void	whoAmI( void );

		using	ScavTrap::_energy;
		using	ScavTrap::attack;
		using	FragTrap::_hits;
		using	FragTrap::_damage;
};

std::ostream	& operator<<( std::ostream & o, DiamondTrap const & rhs );

#endif