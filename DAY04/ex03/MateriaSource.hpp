/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 19:22:47 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 19:59:01 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource: public IMateriaSource {
public:
	MateriaSource(void);
	MateriaSource(MateriaSource const & m) {*this = m;}

	virtual void learnMateria(AMateria* a);
	virtual AMateria* createMateria(std::string const & type);

	~MateriaSource(void) {}

	AMateria* materia[4];
	static int ind;
	MateriaSource & operator=(MateriaSource const & m);
};

#endif
