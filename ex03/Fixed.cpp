/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:33:16 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/16 15:38:53 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ostream>

//Constructors
Fixed::Fixed(void){
	DBG(<< "default constructor called\n");
	this->rawBits = 0;
}

Fixed::Fixed(const int fixed_number){
	DBG(<< "int constructor called\n");
	rawBits = fixed_number  << this->fractionalBits;
}

Fixed::Fixed(const float fixed_number){
	DBG(<< "float constructor called\n");
	rawBits = roundf(fixed_number * (1 << this->fractionalBits));
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
		this->rawBits = other.rawBits;
	return *this;
}

bool Fixed::operator <(const Fixed& other) const{
	DBG(<< "< operator called\n");
	if (this != &other)
		if (this->rawBits < other.rawBits)
			return true;
	return false;
}

bool Fixed::operator >(const Fixed& other) const{
	DBG(<< "> operator called\n");
	if (this != &other)
		if (this->rawBits > other.rawBits)
			return true;
	return false;
}

bool Fixed::operator <=(const Fixed& other) const{
	DBG(<< "< operator called\n");
	if (this != &other)
		if (this->rawBits <= other.rawBits)
			return true;
	return false;
}

bool Fixed::operator >=(const Fixed& other) const{
	DBG(<< "> operator called\n");
	if (this != &other)
		if (this->rawBits >= other.rawBits)
			return true;
	return false;
}

bool Fixed::operator ==(const Fixed& other) const{
	DBG(<< "== operator called\n");
	if (this != &other)
	{
		if (this->rawBits == other.rawBits)
			return true;
		return false;
	}
	return true;	
}

bool Fixed::operator !=(const Fixed& other) const{
	DBG(<< "!= operator called\n");
	if (this != &other)
		if (this->rawBits != other.rawBits)
			return true;
	return false;
}

//Arithmetic operator Functions
Fixed Fixed::operator +(const Fixed& other) const{
	DBG(<< "+ operator called\n");
	return this->toFloat() + other.toFloat();
}

Fixed Fixed::operator -(const Fixed& other) const{
	DBG(<< "- operator called\n");
	return this->toFloat() - other.toFloat();
}

Fixed Fixed::operator *(const Fixed& other) const{
	DBG(<< "* operator called\n");
	return this->toFloat() * other.toFloat();
}

Fixed Fixed::operator /(const Fixed& other) const{
	DBG(<< "/ operator called\n");
	return this->toFloat() / other.toFloat();
}

//Pre/Pro Decrement/Increment operators
Fixed& Fixed::operator ++(){
	this->rawBits += 1;
	return *this;
}

Fixed Fixed::operator ++(int){
	Fixed old = *this;
	this->rawBits += 1;
	return old;
}

Fixed& Fixed::operator --(){
	this->rawBits -= 1;
	return *this;
}

Fixed Fixed::operator --(int){
	Fixed old = *this;
	this->rawBits -= 1;
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
int Fixed::getRawBits(void) const{
	return(this->rawBits);
}

int Fixed::toInt(void)const{
	return (this->rawBits >> this->fractionalBits);
}

float Fixed::toFloat(void)const{
	return (static_cast<float>(this->rawBits) / (1 << this->fractionalBits));
}

//Non member ioperator function
std::ostream& operator <<(std::ostream& file, const Fixed& fixed_num){
	file << fixed_num.toFloat(); 
	return file;
}
