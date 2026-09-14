/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:33:16 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/14 18:31:40 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>


Fixed::Fixed(void): fixedPointNum(0){
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int fixed_value){
	std::cout << "Int constructor called\n";
	fixedPointNum = fixed_value * pow(2, this->fractionalNum);
}

Fixed::Fixed(const float fixed_number){
	std::cout << "Float constructor called\n";
	fixedPointNum = roundf(fixed_number * pow(2, this->fractionalNum));
}

Fixed::Fixed(const Fixed& other){
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed& Fixed::operator =(const Fixed& other){
	std::cout << "Copy operator called\n";
	if (this != &other)
		this->fixedPointNum = other.fixedPointNum;
	return *this;
}

std::ostream& operator <<(std::ostream& file, const Fixed& a){
	file << a.toFloat(); 
	return file;
}

Fixed::~Fixed(){
	std::cout << "Default destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
	return(this->fixedPointNum);
}

int Fixed::toInt(void)const{
	return (this->fixedPointNum/pow(2, this->fractionalNum));
}

float Fixed::toFloat(void)const{
	return (this->fixedPointNum/pow(2, this->fractionalNum));
}