/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 12:37:23 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/07 15:22:38 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
private:
	std::string _name;
	unsigned int _hitPoints;
	unsigned int _maxHitPoints;
	unsigned int _energyPoints;
	unsigned int _maxEnergyPoints;
	unsigned int _level;
	unsigned int _meleeAttackDamage;
	unsigned int _rangedAttackDamage;
	unsigned int _armorDamageReduction;

public:
	ClapTrap(void);
	ClapTrap(std::string const & name);
	ClapTrap(ClapTrap const & robot);

	void rangeAttack(std::string const & targe);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName(void);
	unsigned int getHitPoints(void);
	unsigned int getMaxHitPoints(void);
	unsigned int getEnergyPoints(void);
	unsigned int getMaxEnergyPoints(void);
	unsigned int getLevel(void);
	unsigned int getMeleeAttackDamage(void);
	unsigned int getRangedAttackDamage(void);
	unsigned int getArmorDamageReduction(void);

	void setName(std::string name);
	void setHitPoints(unsigned int num);
	void setMaxHitPoints(unsigned int num);
	void setEnergyPoints(unsigned int num);
	void setMaxEnergyPoints(unsigned int num);
	void setLevel(unsigned int num);
	void setMeleeAttackDamage(unsigned int num);
	void setRangedAttackDamage(unsigned int num);
	void setArmorDamageReduction(unsigned int num);

	~ClapTrap(void);
};

#endif
