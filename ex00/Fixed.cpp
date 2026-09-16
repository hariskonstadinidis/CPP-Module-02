/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:33:16 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/16 11:21:46 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <iomanip>
#include <cmath>

Fixed::Fixed():rawBits(0){
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& other){
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed& Fixed::operator =(const Fixed& other){
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
	{
		this->rawBits = other.getRawBits();
	}
	return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called\n";
	return (this->rawBits);
}

void Fixed::setRawBits(int const new_rawBits){
	std::cout << "setRawBits member function called\n";
	this->rawBits = new_rawBits;
}