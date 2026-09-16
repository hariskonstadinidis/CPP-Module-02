/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:33:16 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/16 11:57:09 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>


Fixed::Fixed(void): rawBits(0){
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int fixed_number){
	std::cout << "Int constructor called\n";
	rawBits = fixed_number << this->fractionalBits;
}

Fixed::Fixed(const float fixed_number){
	std::cout << "Float constructor called\n";
	rawBits = roundf(fixed_number * (1 << this->fractionalBits));
}

Fixed::Fixed(const Fixed& other){
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed& Fixed::operator =(const Fixed& other){
	std::cout << "Copy operator called\n";
	if (this != &other)
		this->rawBits = other.rawBits;
	return *this;
}

std::ostream& operator <<(std::ostream& file, const Fixed& fixed_num){
	file << fixed_num.toFloat(); 
	return file;
}

Fixed::~Fixed(){
	std::cout << "Default destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
	return(this->rawBits);
}

int Fixed::toInt(void)const{
	return (this->rawBits >> this->fractionalBits);
}

float Fixed::toFloat(void)const{
	return (static_cast <float>(this->rawBits) / (1 << this->fractionalBits));
}