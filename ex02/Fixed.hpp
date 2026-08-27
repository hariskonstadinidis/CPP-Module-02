/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:33:13 by hariskon          #+#    #+#             */
/*   Updated: 2026/08/27 20:03:36 by hkonstan         ###   ########.fr       */
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
	bool operator <(Fixed& other);
	bool operator >(Fixed& other);
	bool operator ==(Fixed& other);
	bool operator !=(Fixed& other);
	//Arithmetic operator Functions
	float operator +(Fixed& other);
	float operator -(Fixed& other);
	float operator *(Fixed& other);
	float operator /(Fixed& other);
	//Destructor
	~Fixed();
	
	int		toInt(void) const;
	float	toFloat(void) const;
	float	getRawBits(void) const;
	
	// static int& min(int& num1, int& num2);
	// static int& min(const int& num1, const int& num2);
	// static int& max(int& num1, int& num2);
	// static int& max(const int& num1, const int& num2);
	
	private:
	int		fixedPointNum;
	static const int		fractionalNum = 8;
};

std::ostream& operator <<(std::ostream& file, const Fixed& a);