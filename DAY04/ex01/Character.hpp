/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 13:52:49 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 16:28:57 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
private:
	std::string _name;
	int _activePoints;
	AWeapon* _weapon;
	Character(void);
public:
	Character(std::string const & name);
	Character(Character const & c);

	std::string getName(void) const;
	int getAP(void) const;
	AWeapon* getWeapon(void) const;

	void recoverAP(void);
	void equip(AWeapon* weapon);
	void attack(Enemy* enemy);

	~Character(void);

	Character & operator=(Character const & c);
};

std::ostream & operator<<(std::ostream & o, Character const & c);

#endif
