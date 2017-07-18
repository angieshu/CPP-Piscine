/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:24:02 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 16:04:36 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void) {
	return;
}

Enemy::Enemy(int hp, std::string const & type):	_hitPoints(hp),
												_type(type) {
	return;
}

Enemy::Enemy(Enemy const & e) {
	*this = e;
	return;
}

std::string Enemy::getType(void) const {
	return this->_type;
}

int Enemy::getHP(void) const {
	return this->_hitPoints;
}

void Enemy::takeDamage(int damage) {
	if (damage < 0) return;
	this->_hitPoints -= damage;
	return;
}

Enemy::~Enemy(void) {
	return;
}

Enemy & Enemy::operator=(Enemy const & e) {
	this->_hitPoints = e.getHP();
	this->_type = e.getType();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Enemy const & e) {
	o << e.getType() << std::endl;
	return (o);
}
