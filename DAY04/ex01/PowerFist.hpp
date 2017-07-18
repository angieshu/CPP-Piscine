/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:03:01 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 14:06:19 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIRST_HPP
#define POWERFIRST_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PowerFist: public AWeapon {
public:
	PowerFist(void);
	PowerFist(PowerFist const & p);

	virtual void attack(void) const;

	~PowerFist(void);
};

#endif
