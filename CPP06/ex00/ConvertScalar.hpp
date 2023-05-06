/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertScalar.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:49:52 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/29 12:02:47 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONVERTSCALAR_HPP
# define CONVERTSCALAR_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <exception>
# include <cmath>

class ConvertScalar {
	
	private:
		
		std::string	_input;
		char		_c;
		int			_i;
		float		_f;
		double		_d;

		ConvertScalar();
		void	detectType( void );
		void	makeConversion(void);
	
	public:

		ConvertScalar( const std::string input );
		ConvertScalar( ConvertScalar const & src );
		~ConvertScalar();

		ConvertScalar	& operator=( ConvertScalar const & rhs );

		char	getChar( void ) const;
		int		getInt( void ) const;
		float	getFloat( void ) const;
		double	getDouble( void ) const;
		
		class   NonValidType : public std::exception
			{
				public:
					virtual const char* what() const throw() {
						return ("Not a valid type");
					}
			};
		class   NonDisplayable : public std::exception
			{
				public:
					virtual const char* what() const throw() {
						return ("Non displayable");
					}
			};
		class   Impossible : public std::exception
			{
				public:
					virtual const char* what() const throw() {
						return ("impossible");
					}
			};
};

std::ostream &	operator<<(std::ostream & o, ConvertScalar const & in);


#endif
