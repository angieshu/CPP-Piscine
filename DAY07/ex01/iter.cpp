/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 16:45:16 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/12 18:37:24 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>

void iter(T* array, size_t len, void(*f)(T&)) {
	for(size_t i = 0; i < len; i++) {
		f(array[i]);
	}
}

template <typename T1>
void change(T1 & a) {
	a += 32;
}

int main(void) {
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char b[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
	float c[] = {0.76, 2.56, 7.83, 0.901};

	std::cout << "Array of ints before iter():" << std::endl << "{ ";
	for (int i = 0; i < 10; i++)
		std::cout << a[i] << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << "Array of chars before iter():" << std::endl << "{ ";
	for (int i = 0; i < 7; i++)
		std::cout << b[i] << " ";
	std::cout << "}" << std::endl << std::endl;

	std::cout << "Array of floats before iter():" << std::endl << "{ ";
	for (int i = 0; i < 4; i++)
		std::cout << c[i] << " ";
	std::cout << "}" << std::endl << std::endl << std::endl << std::endl;

	iter(a, 10, change);

	std::cout << "Array of ints after iter():" << std::endl << "{ ";
	for (int i = 0; i < 10; i++)
	std::cout << a[i] << " ";
	std::cout << "}" << std::endl << std::endl;

	iter(b, 7, change);

	std::cout << "Array of chars after iter():" << std::endl << "{ ";
	for (int i = 0; i < 7; i++)
	std::cout << b[i] << " ";
	std::cout << "}" << std::endl << std::endl;

	iter(c, 4, change);

	std::cout << "Array of chars after iter():" << std::endl << "{ ";
	for (int i = 0; i < 4; i++)
	std::cout << c[i] << " ";
	std::cout << "}" << std::endl << std::endl;
	return (0);
}
