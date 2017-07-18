/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:23:16 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 19:50:58 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type):	_type(type),
 												xp_(0){
	return;
}

AMateria::AMateria(AMateria const & a) {
	*this = a;
	return;
}

std::string const & AMateria::getType(void) const {
	return this->_type;
}

unsigned int AMateria::getXP(void) const {
	return this->xp_;
}

AMateria::~AMateria(void) {
	return;
}

AMateria & AMateria::operator=(AMateria const & a) {
	this->_type = a.getType();
	this->xp_ = a.getXP();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, AMateria const & a) {
	o << a.getType() << std::endl;
	return (o);
}
