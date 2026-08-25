/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:33:16 by hariskon          #+#    #+#             */
/*   Updated: 2026/08/25 16:17:42 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ostream>

Fixed::Fixed(void): fractionalNum(8){
	std::cout << "default constructor called\n";
}
Fixed::Fixed(const int fixed_value): fractionalNum(8){
	fixedPointNum = fixed_value * pow(2, this->fractionalNum);
	std::cout << "int constructor called\n";
}

Fixed::Fixed(const float fixed_number): fractionalNum(8){
	fixedPointNum = fixed_number * pow(2, this->fractionalNum);
	std::cout << "float constructor called\n";
}

Fixed::Fixed(const Fixed& other){
	*this = other;
	std::cout << "copy constructor called\n";
}

Fixed& Fixed::operator =(const Fixed& other){
	if (this != &other)
	{
		this->fixedPointNum = other.fixedPointNum;
		this->fractionalNum = other.fractionalNum;
	}
	std::cout << "copy operator called\n";
	return *this;
}

std::ostream& operator <<(std::ostream& file, const Fixed& a){
	file << a.toFloat(); 
	return file;
}

Fixed::~Fixed(){
	std::cout << "default destructor called" << std::endl;
}

float Fixed::getRawBits(void) const{
	return(this->fixedPointNum / pow(2, this->fractionalNum));
}

int Fixed::toInt(void)const{
	return (this->fixedPointNum/pow(2, this->fractionalNum));
}

float Fixed::toFloat(void)const{
	return (this->fixedPointNum/pow(2, this->fractionalNum));
}