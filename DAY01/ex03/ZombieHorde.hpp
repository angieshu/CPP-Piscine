/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 12:44:24 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/05 11:00:07 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde{
private:
	int _n;
	Zombie** _zommies;
public:
	Zombie* randomZombie(void);
	// void create(void);
	void announce(void);
	ZombieHorde(int n);
	~ZombieHorde(void);
};

#endif
