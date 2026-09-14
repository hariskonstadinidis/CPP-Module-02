/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:33:18 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/14 17:55:10 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

int main()
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "\n";

	std::cout << "----------SUBJECT PRINTS------------\n";
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << "\n";
	
	Fixed m1;
	Fixed const m2(Fixed(5.05f) * Fixed(2));
	std::cout << "\n";
	
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
	std::cout << std::boolalpha;
	std::cout << (han < ban) << std::endl;
	std::cout << std::noboolalpha;
	std::cout << "\n";
	return 0;
}
