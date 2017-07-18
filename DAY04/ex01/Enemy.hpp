/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:16:54 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 16:07:56 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy {
private:
	int _hitPoints;
	std::string _type;
public:
	Enemy(void);
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const & e);

	std::string getType(void) const;
	int getHP(void) const;

	virtual void takeDamage(int damage);

	virtual ~Enemy(void);

	Enemy & operator=(Enemy const & e);
};

std::ostream & operator<<(std::ostream & o, Enemy const & e);

#endif
