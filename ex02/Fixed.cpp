/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:33:16 by hariskon          #+#    #+#             */
/*   Updated: 2026/08/27 20:10:56 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ostream>

//Constructors
Fixed::Fixed(void){
	std::cout << "default constructor called\n";
}

Fixed::Fixed(const int fixed_value){
	fixedPointNum = fixed_value * pow(2, this->fractionalNum);
	std::cout << "int constructor called\n";
}

Fixed::Fixed(const float fixed_number){
	fixedPointNum = fixed_number * pow(2, this->fractionalNum);
	std::cout << "float constructor called\n";
}

//Copy Constructor
Fixed::Fixed(const Fixed& other){
	*this = other;
	std::cout << "copy constructor called\n";
}

//Operator Member Functions
Fixed& Fixed::operator =(const Fixed& other){
	std::cout << "copy operator called\n";
	if (this != &other)
	{
		this->fixedPointNum = other.fixedPointNum;
	}
	return *this;
}

bool Fixed::operator <(Fixed& other){
	std::cout << "< operator called\n";
	if (this != &other)
	{
		if (this->fixedPointNum < other.fixedPointNum)
			return true;
	}
	return false;
}

bool Fixed::operator >(Fixed& other){
	std::cout << "> operator called\n";
	if (this != &other)
	{
		if (this->fixedPointNum > other.fixedPointNum)
			return true;
	}
	return false;
}

bool Fixed::operator ==(Fixed& other){
	std::cout << "== operator called\n";
	if (this != &other)
	{
		if (this->fixedPointNum == other.fixedPointNum)
			return true;
		return false;
	}
	return true;	
}

bool Fixed::operator !=(Fixed& other){
	std::cout << "!= operator called\n";
	if (this != &other)
	{
		if (this->fixedPointNum != other.fixedPointNum)
			return true;
	}
	return false;
}

//Arithmetic operator Functions
float Fixed::operator +(Fixed& other){
	std::cout << "+ operator called\n";
	return this->toFloat() + other.toFloat();
}

float Fixed::operator -(Fixed& other){
	std::cout << "- operator called\n";
	return this->toFloat() - other.toFloat();
}

float Fixed::operator *(Fixed& other){
	std::cout << "* operator called\n";
	return this->toFloat() * other.toFloat();
}

float Fixed::operator /(Fixed& other){
	std::cout << "/ operator called\n";
	return this->toFloat() / other.toFloat();
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

std::ostream& operator <<(std::ostream& file, const Fixed& a){
	file << a.toFloat(); 
	return file;
}