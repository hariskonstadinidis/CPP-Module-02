/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:33:13 by hariskon          #+#    #+#             */
/*   Updated: 2026/08/21 15:17:35 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed{
	public:
	Fixed();
	Fixed(const Fixed& other);
	Fixed& operator =(const Fixed& other);
	~Fixed();
	
	int		getRawBits(void);
	void	setRawBits(int const raw);
	
	private:
	int	fixedPointNum;
	int	fractionalNum;
};