/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 19:03:46 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/05 21:53:46 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA {
private:
	std::string _name;
	Weapon& _weapon;
public:
	void attack(void);
	HumanA(std::string name, Weapon& w);
	~HumanA(void);
};

#endif
