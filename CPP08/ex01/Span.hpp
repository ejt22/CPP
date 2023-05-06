/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:01:33 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/30 15:54:19 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <exception>
# include <algorithm>
# include <cmath>

class Span {

	private:

		std::vector<int>	_vect;
		unsigned int		_N;
		unsigned int		_size;
		
		Span();

	public:

		Span( unsigned int N );
		Span( Span const & src );
		~Span();

		Span	& operator=( Span const & rhs );
		
		unsigned int		getSize() const;	
		unsigned int		getMaxSize() const;	
		std::vector<int>	getVector() const;	
		void				addNumber( int const nb );
		float				longestSpan() const;
		float				shortestSpan() const;
		void				fillSpan( std::vector<int>::iterator begin, std::vector<int>::iterator end );

		class fullSpanException : public std::exception {

			public :

				virtual const char *what() const throw() {
					return ("No more space in this span.");
				}
		};

		class spanSizeTooSmallException : public std::exception {

			public :

				virtual const char *what() const throw() {
					return ("Span size is too small.");
				}
		};
};

std::ostream	& operator<<( std::ostream & o, Span const & rhs );

#endif