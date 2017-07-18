/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 16:57:12 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 18:00:16 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

int Squad::unitsCount = 0;

Squad::Squad(void) {
	return;
}

Squad::Squad(Squad const & s) {
	*this = s;
	return;
}

int Squad::getCount(void) const {
	return this->unitsCount;
}

ISpaceMarine* Squad::getUnit(int n) const {
	if (this->units[n]) return this->units[n];
	return NULL;
}

int Squad::push(ISpaceMarine* s) {
	this->units[this->unitsCount] = s;
	this->unitsCount++;
	return this->unitsCount;
}

Squad::~Squad(void) {
	if (!this->unitsCount) return;
	for(int i = 0; i < this->unitsCount; i++)
		delete(this->units[i]);
	return;
}

Squad & Squad::operator=(Squad const & s) {
	if (this->unitsCount) {
		for (int i = 0; i < this->unitsCount; i++)
			delete this->units[i];
	}
	for (int i = 0; i < s.unitsCount; i++)
		this->units[i] = s.units[i];
	this->unitsCount = s.unitsCount;
	return (*this);
}
