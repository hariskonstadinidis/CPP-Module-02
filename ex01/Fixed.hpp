/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:33:13 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/16 15:28:38 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Fixed{
	public:
		Fixed();
		Fixed(const int fixed_number);
		Fixed(const float fixed_number);
		Fixed(const Fixed& other);
		Fixed& operator =(const Fixed& other);
		~Fixed();
		
		int		toInt(void) const;
		float	toFloat(void) const;
		int		getRawBits(void) const;
		
	private:
		int				 rawBits;
		static const int fractionalBits = 8;
};

std::ostream& operator <<(std::ostream& file, const Fixed& fixed_num);