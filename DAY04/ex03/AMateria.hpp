/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:21:16 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 19:59:18 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria {
private:
	std::string _type;
	unsigned int xp_;
public:
	AMateria(void) {return;}
	AMateria(std::string const & type);
	AMateria(AMateria const & a);

	std::string const & getType(void) const; //Returns the materia type
	unsigned int getXP(void) const; //Returns the Materia's XP

	virtual AMateria* clone(void) const = 0;
	virtual void use(ICharacter & target) = 0;

	virtual ~AMateria(void);

	AMateria & operator=(AMateria const & a);
};

std::ostream & operator<<(std::ostream & o, AMateria const & a);

#endif
