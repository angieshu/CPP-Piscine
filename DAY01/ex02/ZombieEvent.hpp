/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 12:47:11 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/05 10:21:55 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP
#include "Zombie.hpp"

class ZombieEvent{
private:
	std::string _type;
	std::string _name;
	Zombie* _zommie;
public:
	void	setZombieType(void);
	void	randomChump(void);
	Zombie*	newZombie(std::string name);
	ZombieEvent(void);
	~ZombieEvent(void);
};

#endif
