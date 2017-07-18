/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:47:51 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 18:50:09 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria {
public:
	Cure(void);
	Cure(Cure const & c) {*this = c;}

	AMateria* clone(void) const;
	virtual void use(ICharacter & target);

	~Cure(void) {return;}
};

#endif
