/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:33:13 by hariskon          #+#    #+#             */
/*   Updated: 2026/08/25 16:15:48 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Fixed{
	public:
	Fixed();
	Fixed(const int fixed_value);
	Fixed(const float fixed_number);
	Fixed(const Fixed& other);
	Fixed& operator =(const Fixed& other);
	~Fixed();
	
	int		toInt(void) const;
	float	toFloat(void) const;
	float	getRawBits(void) const;
	
	private:
	int		fixedPointNum;
	int		fractionalNum;
};

std::ostream& operator <<(std::ostream& file, const Fixed& a);