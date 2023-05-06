/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoo-tho <ejoo-tho@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:54:55 by ejoo-tho          #+#    #+#             */
/*   Updated: 2023/03/14 12:58:33 by ejoo-tho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// resource: https://www.youtube.com/watch?v=HYAgJN3x4GA

bool	bsp( Point const a, Point const b, Point const c, Point const point ) {

	Fixed	acx = c.getX() - a.getX();
	Fixed	acy = c.getY() - a.getY();
	Fixed	abx = b.getX() - a.getX();
	Fixed	aby = b.getY() - a.getY();
	Fixed	apy = point.getY() - a.getY();

	Fixed	w1 = (a.getX() * acy + apy * acx - point.getX() * acy) / (aby * acx - abx * acy);
	Fixed	w2 = (apy - w1 * aby) / acy;

	return (w1 > 0 && w2 > 0 && (w1 + w2) < 1);
}