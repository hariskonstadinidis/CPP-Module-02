/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:33:18 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/16 12:59:34 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
	Fixed n1;
	Fixed const n2( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "\n";

	std::cout << "----------SUBJECT PRINTS------------\n";
	std::cout << n1 << std::endl;
	std::cout << ++n1 << std::endl;
	std::cout << n1 << std::endl;
	std::cout << n1++ << std::endl;
	std::cout << n1 << std::endl;
	std::cout << n2 << std::endl;
	std::cout << Fixed::max(n1, n2) << std::endl;
	std::cout << "\n";
	
	Fixed m1;
	Fixed const m2(Fixed(5.05f) * Fixed(2));
	std::cout << "\n";
	
	Point a(0,0);
	Point b(6,0);
	Point c(3,5);
	Point p1(3,2);
	Point p2(6,4);
	Point p3(2,2);
	Point p4(0,0);
	

	std::cout << std::boolalpha;
	std::cout << bsp(a, b, c, p1) << "\n";
	std::cout << bsp(a, b, c, p2) << "\n";
	std::cout << bsp(a, b, c, p3) << "\n";
	std::cout << bsp(a, b, c, p4) << "\n";
	return 0;
}
