/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 17:27:44 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 17:56:55 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) {
	std::cout << "Tactical Marine ready for battle" << std::endl;
	return;
}

TacticalMarine::TacticalMarine(TacticalMarine const & tm) {
	*this = tm;
	return;
}

ISpaceMarine* TacticalMarine::clone(void) const {
	TacticalMarine* _clone = new TacticalMarine();
	return (_clone);
}

void TacticalMarine::battleCry(void) const {
	std::cout << "For the holy PLOT !" << std::endl;
	return;
}

void TacticalMarine::rangedAttack(void) const {
	std::cout << "* attacks with bolter *" << std::endl;
	return;
}

void TacticalMarine::meleeAttack(void) const {
	std::cout << "* attacks with chainsword *" << std::endl;
	return;
}

TacticalMarine::~TacticalMarine(void) {
	std::cout << "Aaargh .." << std::endl;
	return;
}
