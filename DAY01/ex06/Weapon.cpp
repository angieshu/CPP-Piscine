/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 18:51:33 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/05 18:58:33 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type) {
	return;
}

Weapon::~Weapon(void) {
	return;
}

std::string const &Weapon::getType(void) {
	// std::string const &type = this->_type;
	return (this->_type);
}

void Weapon::setType(std::string type) {
	this->_type = type;
}
