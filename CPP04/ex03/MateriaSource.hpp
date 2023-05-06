/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsajoo-thomson <elsajoo-thomson@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:29:48 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/13 23:05:36 by elsajoo-tho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource	{

	private:

		AMateria	*_tabmat[4];
	
	public:

		MateriaSource( void );
		MateriaSource( MateriaSource const & src );
		~MateriaSource( void );

		MateriaSource	& operator=( MateriaSource const & rhs );
		
		void 		learnMateria( AMateria *m );
		AMateria	*createMateria( std::string const & type );
};

#endif