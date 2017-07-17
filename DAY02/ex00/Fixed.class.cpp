/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 12:08:20 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/06 15:26:05 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::_fracBits = 8;

Fixed::Fixed(void) :	_fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & n) {
	*this = n;
	std::cout << "Copy constructor called" << std::endl;
	return;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw) {
	this->_fixedPointValue = raw;
	std::cout << "setRawBits member function called" << std::endl;
	return;
}

Fixed & Fixed::operator=(Fixed const & res) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = res.getRawBits();
	 return (*this);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}
