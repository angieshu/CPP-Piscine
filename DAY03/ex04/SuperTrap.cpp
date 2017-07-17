/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 15:48:53 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/07 17:03:36 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap (void) {

	// unsigned num = ÷FragTrap::getHitPoints();
	setHitPoints(FragTrap::getHitPoints());
	setMaxHitPoints(FragTrap::getMaxHitPoints());
	setEnergyPoints(NinjaTrap::getEnergyPoints());
	setMaxEnergyPoints(NinjaTrap::getMaxEnergyPoints());
	setLevel(1);
	setMeleeAttackDamage(NinjaTrap::getMeleeAttackDamage());
	setRangedAttackDamage(FragTrap::getRangedAttackDamage());
	setArmorDamageReduction(FragTrap::getArmorDamageReduction());
	std::cout << "SuperTrap created." << std::endl;
	std::cout << "Wazzzzzuuppp man! So here I am, your SuPEr tRaP "
			<< getName() << "." << std::endl;
	return;
}

SuperTrap::SuperTrap (std::string const & name) {

	setName(name);
	setHitPoints(FragTrap::getHitPoints());
	setMaxHitPoints(FragTrap::getMaxHitPoints());
	setEnergyPoints(NinjaTrap::getEnergyPoints());
	setMaxEnergyPoints(NinjaTrap::getMaxEnergyPoints());
	setLevel(1);
	setMeleeAttackDamage(NinjaTrap::getMeleeAttackDamage());
	setRangedAttackDamage(FragTrap::getRangedAttackDamage());
	setArmorDamageReduction(FragTrap::getArmorDamageReduction());
	std::cout << "SuperTrap created." << std::endl;
	std::cout << "Wazzzzzuuppp man! So here I am, your SuPEr tRaP "
			<< getName() << "." << std::endl;
	return;
}

SuperTrap::SuperTrap (SuperTrap const & robot) {
	*this = robot;
	return;
}

SuperTrap::~SuperTrap (void) {
	std::cout << "< " << getName() << " > :" << std::endl;
	std::cout << "That's it? Well.. I had better days..." << std::endl;
	return;
}
