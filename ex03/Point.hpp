/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 13:57:38 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/08 18:31:51 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Fixed.hpp"

class Point{
	
	public:
	
	Point();
	Point(const float x, const float y);
	Point& operator =(Point& other);
	Point(const Point& other);
	~Point();
	
	Fixed get_x() const;
	Fixed get_y() const;
	private:
	
	const Fixed x;
	const Fixed y;
};
