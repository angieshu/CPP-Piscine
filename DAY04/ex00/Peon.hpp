/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 12:34:06 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 13:16:16 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPPP
#define PEON_HPPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon: public Victim {
private:
	Peon(void);
public:
	Peon(std::string name);
	Peon(Peon const & p);

	virtual void getPolymorphed(void) const;

	~Peon(void);

	Peon & operator=(Peon const & p);
};

#endif
