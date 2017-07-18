/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 19:02:36 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 20:04:09 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int Character::ind = 0;

Character::Character(std::string const name): _name(name){
	for (int i = 0; i < 4; i++)
		this->inv[i] = NULL;
	return;
}

std::string const & Character::getName(void) const {
	return this->_name;
}

void Character::equip(AMateria *m) {
	if (this->ind > 3) return;
	this->inv[this->ind] = m;
	this->ind++;
	return;
}

void Character::unequip(int idx) {
	if (idx > this->ind || idx < 0 || !this->inv[idx]) return;
	this->inv[idx] = NULL;
	this->ind--;
	for (int i = idx; i < 3; i++)
		this->inv[i] = this->inv[i + 1];
		return;
}

void Character::use(int idx, ICharacter & target) {
	if (idx > 3 || idx < 0 || !this->inv[idx]) return;
	this->inv[idx]->use(target);
	return;
}

Character::~Character(void) {
	return;
}

Character & Character::operator=(Character const &c) {
	this->_name = c.getName();
	for(int i = 0; i < this->ind; i++)
		this->inv[i] = NULL;
	for(int i = 0; i < 4; i++)
		this->inv[i] = c.inv[i];
	this->ind = c.ind;
	return (*this);
}
