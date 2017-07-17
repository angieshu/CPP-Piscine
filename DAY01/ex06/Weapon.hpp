/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 18:47:03 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/05 19:03:33 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon {
private:
	std::string _type;
public:
	std::string const &getType(void);
	void setType(std::string type);
	Weapon(std::string type);
	~Weapon(void);
};

#endif
