/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 11:26:42 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/14 11:53:32 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <list>
#include "easyfind.hpp"

int main(void) {
	int array[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::vector<int> a1(array, array + 10);

	std::cout << std::endl << "The contents of array are:";
	for (std::vector<int>::iterator it = a1.begin(); it != a1.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl << std::endl;
	try {
		std::cout	<< "Using easyfind() to find number 6 in vector<int>: "
					<< easyfind(a1, 6) << std::endl;
		std::cout	<< "And number 10: " << easyfind(a1, 10) << std::endl;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl << std::endl;
	}

	std::list<int> a2;
	a2.assign(array, array + 10);
	try {
		std::cout	<< "Using easyfind() to find number 3 in list<int>: "
					<< easyfind(a2, 3) << std::endl;
		std::cout	<< "Looking for number 19: " << easyfind(a2, 19) << std::endl;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl << std::endl;
	}
	return (0);
}
