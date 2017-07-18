/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 12:41:27 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 13:16:24 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void) {
	return;
}

Peon::Peon(std::string name): Victim(name){
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::Peon(Peon const & p): Victim(p){
	std::cout << "Zog zog." << std::endl;
	return;
}

void Peon::getPolymorphed(void) const {
	std::cout	<< getName()
				<< " has been turned into a pink pony !"
				<< std::endl;
	return;
}

Peon::~Peon(void) {
	std::cout << "Bleuark..." << std::endl;
	return;
}

Peon & Peon::operator=(Peon const & p) {
	setName(p.getName());
	return (*this);
}
