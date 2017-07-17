/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 12:38:39 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/05 12:56:49 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void){
	std::string myString = "HI THIS IS BRAIN";
	std::string* myStringPtr = &myString;
	std::string& myStringRef = myString;

	std::cout << "String: " << std::endl << myString << std::endl << std::endl;
	std::cout << "Pointer to String: " << std::endl;
	std::cout << *myStringPtr << std::endl << std::endl;
	std::cout << "Reference to String: " << std::endl;
	std::cout << myStringRef << std::endl << std::endl;

	std::cout << "Lets change our Pointer a bit. We're going to add \" AND STOMACH\":"
			<< std::endl;
	*myStringPtr += " AND STOMACH";
	std::cout << "Pinter to String:" << std::endl;
	std::cout << *myStringPtr << std::endl << std::endl;

	std::cout << "Now lets add \". WE ARE HUNGRY!\" to our Reference:" << std::endl;
	myStringRef += ". WE ARE HUNGRY!";
	std::cout << "Reference to String:" << std::endl;
	std::cout << myStringRef << std::endl << std::endl;

	std::cout << "The original String after adding \" PLEASE FEED US!\":" << std::endl;
	myString += " PLEASE FEED US!";
	std::cout << myString << std::endl;
}
