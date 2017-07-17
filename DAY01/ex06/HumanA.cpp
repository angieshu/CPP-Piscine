/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 19:08:18 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/05 21:54:41 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& w): _name(name), _weapon(w) {
	return;
}

HumanA::~HumanA(void) {
	return;
}

void HumanA::attack(void) {
	std::cout << this->_name
			<< " attacks with his "
			<< this->_weapon.getType() << std::endl;
}
