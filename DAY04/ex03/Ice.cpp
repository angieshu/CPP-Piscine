/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:37:45 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 19:51:51 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice"){
	return;
}

Ice::Ice(Ice const & i){
	*this = i;
	return;
}

AMateria * Ice::clone(void) const {
	Ice* _i = new Ice();
	return _i;
}

void Ice::use(ICharacter & target) {
	std::cout	<< "* shoots an ice bolt at "
				<< target.getName()
				<< " *" << std::endl;
	return;
}
