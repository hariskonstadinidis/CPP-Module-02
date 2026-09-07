/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:33:16 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/07 15:42:23 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ostream>

static float epsilon = 0.00390625f;

//Constructors
Fixed::Fixed(void){
	DBG(<< "default constructor called\n");
	this->fixedPointNum = 0;
}

Fixed::Fixed(const int fixed_value){
	DBG(<< "int constructor called\n");
	fixedPointNum = fixed_value * pow(2, this->fractionalNum);
}

Fixed::Fixed(const float fixed_number){
	DBG(<< "float constructor called\n");
	fixedPointNum = fixed_number * pow(2, this->fractionalNum);
}

//Copy Constructor
Fixed::Fixed(const Fixed& other){
	DBG(<< "copy constructor called\n");
	*this = other;
}

//Operator Member Functions
Fixed& Fixed::operator =(const Fixed& other){
	DBG(<< "copy operator called\n");
	if (this != &other)
	{
		this->fixedPointNum = other.fixedPointNum;
	}
	return *this;
}

bool Fixed::operator <(Fixed& other) const{
	DBG(<< "< operator called\n");
	if (this != &other)
	{
		if (this->fixedPointNum < other.fixedPointNum)
			return true;
	}
	return false;
}

bool Fixed::operator >(Fixed& other) const{
	DBG(<< "> operator called\n");
	if (this != &other)
	{
		if (this->fixedPointNum > other.fixedPointNum)
			return true;
	}
	return false;
}

bool Fixed::operator ==(Fixed& other) const{
	DBG(<< "== operator called\n");
	if (this != &other)
	{
		if (this->fixedPointNum == other.fixedPointNum)
			return true;
		return false;
	}
	return true;	
}

bool Fixed::operator !=(Fixed& other) const{
	DBG(<< "!= operator called\n");
	if (this != &other)
	{
		if (this->fixedPointNum != other.fixedPointNum)
			return true;
	}
	return false;
}

//Arithmetic operator Functions
float Fixed::operator +(Fixed other){
	DBG(<< "+ operator called\n");
	return this->toFloat() + other.toFloat();
}

float Fixed::operator -(Fixed other){
	DBG(<< "- operator called\n");
	return this->toFloat() - other.toFloat();
}

float Fixed::operator *(Fixed other){
	DBG(<< "* operator called\n");
	return this->toFloat() * other.toFloat();
}

float Fixed::operator /(Fixed other){
	DBG(<< "/ operator called\n");
	return this->toFloat() / other.toFloat();
}

//Pre/Pro Decrement/Increment operators
Fixed& Fixed::operator ++(){
	this->fixedPointNum += epsilon * 256;
	return *this;
}

Fixed Fixed::operator ++(int){
	Fixed old = *this;
	this->fixedPointNum += epsilon * 256;
	return old;
}

Fixed& Fixed::operator --(){
	this->fixedPointNum -= epsilon * 256;
	return *this;
}

Fixed Fixed::operator --(int){
	Fixed old = *this;
	this->fixedPointNum -= epsilon * 256;
	return old;
}

//MinMax Functions
Fixed& Fixed::min(Fixed& num1, Fixed& num2){
	if(num1 < num2)
		return num1;
	return num2;
}

const Fixed& Fixed::min(const Fixed& num1 , const Fixed& num2){
	if(num1.getRawBits() < num2.getRawBits())
		return num1;
	return num2;
}

Fixed& Fixed::max(Fixed& num1, Fixed& num2){
	if(num1 > num2)
		return num1;
	return num2;
}

const Fixed& Fixed::max(const Fixed& num1 , const Fixed& num2){
	if(num1.getRawBits() > num2.getRawBits())
		return num1;
	return num2;
}

//Destructor
Fixed::~Fixed(){
	DBG(<< "default destructor called" << std::endl);
}

//Getter Functions
float Fixed::getRawBits(void) const{
	return(this->fixedPointNum / pow(2, this->fractionalNum));
}

int Fixed::toInt(void)const{
	return (this->fixedPointNum/pow(2, this->fractionalNum));
}

float Fixed::toFloat(void)const{
	return (this->fixedPointNum/pow(2, this->fractionalNum));
}
//Non member ioperator function
std::ostream& operator <<(std::ostream& file, const Fixed& a){
	file << a.toFloat(); 
	return file;
}