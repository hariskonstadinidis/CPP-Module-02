/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:33:18 by hariskon          #+#    #+#             */
/*   Updated: 2026/09/08 18:32:43 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
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
