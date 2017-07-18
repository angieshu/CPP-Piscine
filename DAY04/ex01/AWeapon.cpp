/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 13:32:17 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 16:04:40 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Aweapon.hpp"

AWeapon::AWeapon(void) {
	return;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage):	_name(name),
																	_apCost(apcost),
																	_damagePoints(damage) {
	return;
}

AWeapon::AWeapon(AWeapon const & aw) {
	*this = aw;
	return;
}

std::string AWeapon::getName(void) const {
	return this->_name;
}

int AWeapon::getAPCost(void) const {
	return this->_apCost;
}

int AWeapon::getDamage(void) const {
	return this->_damagePoints;
}

// void attack(void) const

AWeapon::~AWeapon(void) {
	return;
}

AWeapon & AWeapon::operator=(AWeapon const & aw) {
	this->_name = aw.getName();
	this->_apCost = aw.getAPCost();
	this->_damagePoints = aw.getDamage();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, AWeapon const & aw) {
	o << aw.getName() << std::endl;
	return o;
}
