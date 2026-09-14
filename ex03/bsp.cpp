/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 13:57:32 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/14 18:17:33 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed get_cross(Point const a, Point const b, Point const p)
{
	Fixed cross;
	
	cross = (b.get_x() - a.get_x()) * (p.get_y() - a.get_y())\
	- (b.get_y() - a.get_y()) * (p.get_x() - a.get_x());
	return cross;
}


bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed e(0);
	
	Fixed cross_d1 = get_cross(a, b, point);
	Fixed cross_d2 = get_cross(b, c, point);
	Fixed cross_d3 = get_cross(c, a, point);
	
	
	if ((cross_d1 < e && cross_d2 < e && cross_d3 < e)\
	|| (cross_d1 > e && cross_d2 > e && cross_d3 > e))
		return true;
	return false;
}