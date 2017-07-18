/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:50:13 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 20:03:12 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure"){
	return;
}

AMateria* Cure::clone(void) const {
	Cure* _c = new Cure();
	return _c;
}

void Cure::use(ICharacter & target) {
	std::cout	<< "* heals "
				<< target.getName()
				<< "’s wounds *" << std::endl;
}
