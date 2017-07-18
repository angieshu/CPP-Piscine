/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 20:42:44 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/13 18:51:48 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.tpp"

int main(void) {
	Array <int> a(10);
	std::cout << "Array of ints:	";
	try {
		for (int i = 0; i < 10; i++) {
			a[i] = i + 1;
			std::cout << a[i] << " ";
		}
		std::cout << std::endl;
		std::cout	<< "Trying to display value in array that index 11:	"
					<< a[11] << std::endl;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	Array <std::string> b(3);
	try {
		b[0] = "Hello";
		b[1] = "World";
		b[2] = "!";
		std::cout << "Array of std::strings:				";
		for(int i = 0; i < 3; i++)
			std::cout << b[i] << " ";
		std::cout << std::endl;
		std::cout << "Trying to reach element with index 1:		" << b[1] << std::endl;
		std::cout << "Element with index 4:				" << b[4] << std::endl;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	Array<double> c(5);
	try {
		std::cout << "Array of floats:				";
		for(int i = 0; i < 5; i++) {
			c[i] = (i * 0.1 + 1) * 0.078;
			std::cout << c[i] << " ";
		}
		std::cout << std::endl;
		std::cout << "Element number 1:				" << c[1] << std::endl;
		std::cout << "Element number 10:				" << c[10] << std::endl;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
