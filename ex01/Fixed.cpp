/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:33:16 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/08 14:33:26 by hkonstan         ###   ########.fr       */
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
	std::cout << "int constructor called\n";
	fixedPointNum = fixed_value * pow(2, this->fractionalNum);
}

Fixed::Fixed(const float fixed_number): fractionalNum(8){
	std::cout << "float constructor called\n";
	fixedPointNum = fixed_number * pow(2, this->fractionalNum);
}

Fixed::Fixed(const Fixed& other){
	std::cout << "copy constructor called\n";
	*this = other;
}

Fixed& Fixed::operator =(const Fixed& other){
	std::cout << "copy operator called\n";
	if (this != &other)
	{
		this->fixedPointNum = other.fixedPointNum;
		this->fractionalNum = other.fractionalNum;
	}
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