/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:33:18 by hariskon          #+#    #+#             */
/*   Updated: 2026/08/28 15:51:50 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

int main()
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	
	std::cout << Fixed(5.05f) * Fixed(5) << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;

	// std::cout << b << std::endl;

	// std::cout << Fixed::max( a, b ) << std::endl;
	
	Fixed han(23.5f);
	Fixed ban(23.6f);
	// Fixed a;
	// std::cout << std::boolalpha;
	// std::cout << (ban < han) << std::endl;
	// std::cout << (han < ban) << std::endl;
	// std::cout << (han - ban) << std::endl;
	// std::cout << (han + ban) << std::endl;
	std::cout << (han * ban) << std::endl;
	// std::cout << (han / ban) << std::endl;
	// std::cout << Fixed::min(ban, han) << std::endl;
	// std::cout << std::noboolalpha;
	// std::cout << Fixed::min(a, ban) << std::endl;
	return 0;
}
