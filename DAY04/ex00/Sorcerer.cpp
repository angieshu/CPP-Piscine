/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 10:44:02 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 13:05:14 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) {
	return;
}

Sorcerer::Sorcerer(std::string name, std::string title):	_name(name),
															_title(title) {
	std::cout	<< this->_name << ", "
				<< this->_title
				<< ", is born!" << std::endl;
	return;
}

Sorcerer::Sorcerer(Sorcerer const & s) {
	*this = s;
	return;
}

std::string Sorcerer::getName(void) const {
	return this->_name;
}

std::string Sorcerer::getTitle(void) const {
	return this->_title;
}

void Sorcerer::polymorph(Victim const & v) const {
	v.getPolymorphed();
	return;
}

Sorcerer::~Sorcerer(void) {
	std::cout	<< this->_name << ", "
				<< this->_title
				<< ", is dead. Consequences will never be the same !"
				<< std::endl;
	return;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & s) {
	this->_name = s.getName();
	this->_title = s.getTitle();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & s) {
	o	<< "I am, " << s.getName()
		<< ", " << s.getTitle()
		<< ", and I like ponies!"
		<< std::endl;
	return (o);
}
