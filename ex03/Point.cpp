/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 13:57:35 by hkonstan          #+#    #+#             */
/*   Updated: 2026/09/08 18:22:51 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

# ifdef DEBUG
    #define DBG(x) do { std::cout x; } while (0)
# else
    #define DBG(x) do {} while (0)
# endif

//Constructors
Point::Point(): x(0), y(0)
{
	DBG(<< "Default constructor called!");
}

Point::Point(const float x, const float y):x(x), y(y){
	DBG(<< "Float input constructor called\n");
}

Point::Point(const Point& other): x(other.x), y(other.y){
	DBG(<< "copy constructor called\n");
}

Point& Point::operator=(Point& other){
	DBG(<< "copy asignment operator called\n");
	(void)other;
	return *this;
}

Point::~Point()
{
	DBG(<< "Default destructor called!");
}

//Getters
Fixed Point::get_x() const{
	return this->x;
}

Fixed Point::get_y() const{
	return this->y;
}
