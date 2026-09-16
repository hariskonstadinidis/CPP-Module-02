/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:33:13 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/16 11:23:57 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed{
	public:
	Fixed();
	Fixed(const Fixed& other);
	Fixed& operator =(const Fixed& other);
	~Fixed();
	
	int		getRawBits(void) const;
	void	setRawBits(int const new_rawBits);
	
	private:
	int					rawBits;
	static const int	fractionalBits = 8;
};