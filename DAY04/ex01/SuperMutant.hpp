/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:51:18 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 14:57:56 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include <iostream>
#include <string>
#include "Enemy.hpp"

class SuperMutant: public Enemy {
public:
	SuperMutant(void);
	SuperMutant(SuperMutant const & sm);

	virtual void takeDamage(int damage);
	
	virtual ~SuperMutant(void);
};

#endif
