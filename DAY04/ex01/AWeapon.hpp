/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 13:22:32 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 16:07:55 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon {
private:
	std::string _name;
	int _apCost;
	int _damagePoints;
public:
	AWeapon(void);
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const & aw);

	std::string getName(void) const;
	int getAPCost(void) const;
	int getDamage(void) const;

	virtual void attack(void) const = 0;

	virtual ~AWeapon(void);

	AWeapon & operator=(AWeapon const & aw);
};

std::ostream & operator<<(std::ostream & o, AWeapon const & aw);

#endif
