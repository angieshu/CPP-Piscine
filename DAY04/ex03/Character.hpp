/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:58:18 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 20:06:26 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter {
private:
	std::string _name;
public:
	Character(void) {return;}
	Character(std::string const name);
	Character(Character const & c) {*this = c;}

	virtual std::string const & getName(void) const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

	~Character(void);

	AMateria* inv[4];
	static int ind;

	Character & operator=(Character const & c);
};

#endif
