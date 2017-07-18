/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 10:35:22 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 13:01:30 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer {
private:
	std::string _name;
	std::string _title;
	Sorcerer(void);
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const & s);

	std::string getName(void) const;
	std::string getTitle(void) const;

	void polymorph(Victim const & v) const;

	~Sorcerer(void);

	Sorcerer & operator=(Sorcerer const & s);
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & s);

#endif
