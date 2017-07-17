/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 17:39:24 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/05 18:34:08 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

Human::Human(void) {
	this->_myName = "Marco";
	this->_myAge = 41;
	this->_myHeight = 180;
	this->_myWeight = 80;
	std::cout << "Human created." << std::endl
			<< "Name: " << this->_myName << std::endl
			<< "Age: " << this->_myAge << " years." << std::endl
			<< "Height: " << this->_myHeight << " centimeters." << std::endl
			<< "Weight: " << this->_myWeight << " kilograms." << std::endl;
	return;
}

Human::~Human(void) {
	std::cout << "Human died." << std::endl;
	return;
}

Brain const &Human::getBrain(void) const{
	return (this->_myBrain);
}

std::string Human::identify(void) {
	return (this->_myBrain.identify());
}
