/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 21:16:12 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/05 21:56:38 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name) {
	return;
}

HumanB::~HumanB(void) {
	return;
}

void HumanB::setWeapon(Weapon& w) {
	this->_weapon = &w;
	return;
}

void HumanB::attack(void) {
	std::cout << this->_name
			<< " attacks with his "
			<< this->_weapon->getType() << std::endl;
}
