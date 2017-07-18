/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 19:32:33 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 20:06:51 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

int MateriaSource::ind = 0;

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
	return;
}

void MateriaSource::learnMateria(AMateria * a) {
	if (ind > 3) return;
	this->materia[this->ind] = a;
	this->ind++;
	return;
}

AMateria * MateriaSource::createMateria(std::string const & type) {
	if (type == "ice") return new Ice();
	else if (type == "cure") return new Cure();
	else return NULL;
}
