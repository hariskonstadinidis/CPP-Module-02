/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:33:13 by hariskon          #+#    #+#             */
/*   Updated: 2026/08/27 13:45:46 by hkonstan         ###   ########.fr       */
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
	void	setRawBits(int const raw);
	
	private:
	int					fixedPointNum;
	static const int	fractionalNum = 8;
};