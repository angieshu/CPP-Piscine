/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 11:56:38 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 13:11:57 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void) {
	return;
}

Victim::Victim(std::string name): _name(name) {
	std::cout	<< "Some random victim called "
				<< name
				<< " just popped !" << std::endl;
	return;
}

Victim::Victim(Victim const & v) {
	*this = v;
	return;
}

std::string Victim::getName(void) const {
	return this->_name;
}

void Victim::setName(std::string const & name) {
	this->_name = name;
	return;
}

void Victim::getPolymorphed(void) const {
	std::cout	<< this->_name
				<< " has been turned into a cute little sheep !"
				<< std::endl;
	return;
}

Victim::~Victim(void) {
	std::cout	<< "Victim "
				<< this->_name
				<< " just died for no apparent reason !"
				<< std::endl;
	return;
}

Victim & Victim::operator=(Victim const & v) {
	setName(v.getName());
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Victim const & v) {
	o	<< "I'm "
		<< v.getName()
		<< " and I like otters !"
		<< std::endl;
	return (o);
}
