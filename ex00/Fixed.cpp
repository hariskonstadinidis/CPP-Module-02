/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:33:16 by hariskon          #+#    #+#             */
/*   Updated: 2026/08/21 15:32:01 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <iomanip>
#include <cmath>

Fixed::Fixed():fixedPointNum(0), fractionalNum(8){
	std::cout << "default constructor called\n";
}

Fixed::Fixed(const Fixed& other){
	*this = other;
	std::cout << "copy constructor called\n";
}

Fixed& Fixed::operator =(const Fixed& other){
	if (this != &other)
	{
		this->fixedPointNum = other.fixedPointNum;
	}
	std::cout << "copy operator called\n";
	return *this;
}

Fixed::~Fixed(){
	std::cout << "default destructor called" << std::endl;
}

int Fixed::getRawBits(void){
	std::cout << "getRawBits called\n";
	return (this->fixedPointNum);
}

void Fixed::setRawBits(int const raw){
	this->fixedPointNum = raw;
	std::cout << "setRawBits called\n";
}