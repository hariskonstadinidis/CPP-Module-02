/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:33:13 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/16 12:50:13 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
 
# ifdef DEBUG
    #define DBG(x) do { std::cout x; } while (0)
# else
    #define DBG(x) do {} while (0)
# endif

class Fixed{
	public:
	//Constructors
	Fixed();
	Fixed(const int fixed_number);
	Fixed(const float fixed_number);
	Fixed(const Fixed& other);
	//Operator Member Functions
	Fixed& operator =(const Fixed& other);
	//Comparison operator Functions
	bool operator <(const Fixed& other) const;
	bool operator >(const Fixed& other) const;
	bool operator <=(const Fixed& other) const;
	bool operator >=(const Fixed& other) const;
	bool operator ==(const Fixed& other) const;
	bool operator !=(const Fixed& other) const;
	//Arithmetic operator Functions
	Fixed operator +(const Fixed& other) const;
	Fixed operator -(const Fixed& other) const;
	Fixed operator *(const Fixed& other) const;
	Fixed operator /(const Fixed& other) const;
	//Pre/Pro Decrement/Increment operators
	Fixed& operator ++();
	Fixed operator ++(int);
	Fixed& operator --();
	Fixed operator --(int);
	//Destructor
	~Fixed();
	
	int		toInt(void) const;
	float	toFloat(void) const;
	int	getRawBits(void) const;
	
	static Fixed& min(Fixed& num1, Fixed& num2);
	static const Fixed& min(const Fixed& num1, const Fixed& num2);
	static Fixed& max(Fixed& num1, Fixed& num2);
	static const Fixed& max(const Fixed& num1, const Fixed& num2);
	
	private:
	int				 rawBits;
	static const int fractionalBits = 8;
};

std::ostream& operator <<(std::ostream& file, const Fixed& a);