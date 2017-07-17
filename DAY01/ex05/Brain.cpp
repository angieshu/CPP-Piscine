/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 16:53:30 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/05 18:32:02 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include "Brain.hpp"

Brain::Brain(void) {
	this->capacity = 2.5;
	this->volume = 1500;
	std::cout << "Brain conected." << std::endl
			<< "Capacity: " << this->capacity << " petabytes." << std::endl
			<< "Volume: " << this->volume << " cubic centimeters."<< std::endl;
	return;
}

Brain::~Brain(void) {
	std::cout << "Brain lost." << std::endl;
	return;
}

std::string Brain::identify(void) const {
	std::stringstream addr;
	addr << this;
	return (addr.str());
}
