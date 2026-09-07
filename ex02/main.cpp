/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:33:18 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/07 15:26:01 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

int main()
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << "----------SUBJECT PRINTS------------\n";
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	
	Fixed m1;
	Fixed const m2(Fixed(5.05f) * Fixed(2));
	std::cout << "----------MY PRINTS------------\n";
	std::cout << Fixed(5.05f) * Fixed(5) << std::endl;
	std::cout << "a is: " << m1 << std::endl;
	std::cout << ++m1 << std::endl;
	
	Fixed m3(125.5f);
	std::cout << "m3 is: " << m3 << "\n" << "m3 after --m3 is: " << --m3 <<  std::endl;
	Fixed han(23.5f);
	Fixed ban(23.6f);
	std::cout << (han * ban) << std::endl;
	std::cout << (han * 2) << std::endl;
	
	return 0;
}
