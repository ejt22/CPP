/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 22:08:05 by elsajoo-tho       #+#    #+#             */
/*   Updated: 2023/03/14 12:57:19 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {

private:

	Fixed	_x;
	Fixed	_y;

public:

	Point( void );
	Point( float const x, float const y );
	Point( Point const & src );
	~Point();

	Fixed	getX( void ) const;
	Fixed	getY( void ) const;
	
	Point	& operator=( Point const & rhs );
	bool	operator!=( Point const & rhs ) const;
};

std::ostream	& operator<<( std::ostream & o, Point const & rhs );

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif