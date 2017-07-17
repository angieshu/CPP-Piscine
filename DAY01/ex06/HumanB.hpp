/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 21:12:36 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/05 21:21:07 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB {
private:
	std::string _name;
	Weapon* _weapon;
public:
	void attack(void);
	void setWeapon(Weapon &w);
	HumanB(std::string name);
	~HumanB(void);
};

#endif
