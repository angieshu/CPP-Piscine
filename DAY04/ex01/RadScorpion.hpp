/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:04:12 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 15:07:57 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include <iostream>
#include <string>
#include "Enemy.hpp"

class RadScorpion: public Enemy {
public:
	RadScorpion(void);
	RadScorpion(RadScorpion const & rs);

	virtual void takeDamage(int damage);

	~RadScorpion(void);
};

#endif
