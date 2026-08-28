/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:33:13 by hariskon          #+#    #+#             */
/*   Updated: 2026/08/28 15:51:14 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

static float epsilon = 0.00390625f;
 
class Fixed{
	public:
	//Constructors
	Fixed();
	Fixed(const int fixed_value);
	Fixed(const float fixed_number);
	Fixed(const Fixed& other);
	//Operator Member Functions
	Fixed& operator =(const Fixed& other);
	//Comparison operator Functions
	bool operator <(Fixed& other) const;
	bool operator >(Fixed& other) const;
	bool operator ==(Fixed& other) const;
	bool operator !=(Fixed& other) const;
	//Arithmetic operator Functions
	float operator +(Fixed other);
	float operator -(Fixed other);
	float operator *(Fixed other);
	float operator /(Fixed other);
	//Pre/Pro Decrement/Increment operators
	Fixed& operator ++();
	// float operator -(Fixed& other);
	// float operator *(Fixed& other);
	// float operator /(Fixed& other);
	//Destructor
	~Fixed();
	
	int		toInt(void) const;
	float	toFloat(void) const;
	float	getRawBits(void) const;
	
	static Fixed& min(Fixed& num1, Fixed& num2);
	static const Fixed& min(const Fixed& num1, const Fixed& num2);
	static Fixed& max(Fixed& num1, Fixed& num2);
	static const Fixed& max(const Fixed& num1, const Fixed& num2);
	
	private:
	int		fixedPointNum;
	static const int		fractionalNum = 8;
};

std::ostream& operator <<(std::ostream& file, const Fixed& a);