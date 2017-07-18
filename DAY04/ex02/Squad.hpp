/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 16:50:22 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 17:59:22 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include <iostream>
#include <string>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

class Squad: public ISquad {
public:
	Squad(void);
	Squad(Squad const & s);

	virtual int getCount(void) const;
	virtual ISpaceMarine* getUnit(int n) const;
	virtual int push(ISpaceMarine* s);

	~Squad(void);

	static int unitsCount;
	ISpaceMarine* units[20000];

	Squad & operator=(Squad const & s);
};

#endif
