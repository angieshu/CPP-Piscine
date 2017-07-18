/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 13:59:04 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 16:36:46 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {
	return;
}

Character::Character(std::string const & name):	_name(name),
 												_activePoints(40),
												_weapon(NULL) {
	return;
}

Character::Character(Character const & c) {
	*this = c;
	return;
}

std::string Character::getName(void) const {
	return this->_name;
}

int Character::getAP(void) const {
	return this->_activePoints;
}

AWeapon* Character::getWeapon(void) const{
	if (this->_weapon) return this->_weapon;
	else return NULL;
}

void Character::recoverAP(void) {
	if (this->_activePoints >= 40) return;
	if (this->_activePoints >= 30 &&  this->_activePoints < 40)
		this->_activePoints = 40;
	else this->_activePoints += 10;
	return;
}

void Character::equip(AWeapon* weapon) {
	this->_weapon = weapon;
	return;
}

void Character::attack(Enemy* enemy) {
	if (!this->_weapon || this->_activePoints < this->_weapon->getAPCost()) return;
	std::cout	<< getName() << " attacks "
				<< enemy->getType() << " with a "
				<< this->_weapon->getName() << std::endl;
	this->_activePoints -= this->_weapon->getAPCost();
	this->_weapon->attack();
	enemy->takeDamage(this->_weapon->getDamage());
	if (enemy->getHP() <= 0) delete enemy;
	return;
}

Character::~Character(void) {
	return;
}

Character & Character::operator=(Character const & c) {
	this->_name = c.getName();
	this->_activePoints = c.getAP();
	this->_weapon = c.getWeapon();
	return(*this);
}

std::ostream & operator<<(std::ostream & o, Character const & c) {
	if (!c.getWeapon()) o	<< c.getName() << " has "
							<< c.getAP() << " AP and is unarmed" << std::endl;
	else o	<< c.getName() << " has "
			<< c.getAP() << " AP and wields a "
			<< c.getWeapon()->getName() << std::endl;
	return (o);
}
