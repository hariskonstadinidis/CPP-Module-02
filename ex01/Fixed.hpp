/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:33:13 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/14 18:09:44 by hkonstan         ###   ########.fr       */
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
		int	getRawBits(void) const;
		
	private:
		int				 fixedPointNum;
		static const int fractionalNum = 8;
};

std::ostream& operator <<(std::ostream& file, const Fixed& a);