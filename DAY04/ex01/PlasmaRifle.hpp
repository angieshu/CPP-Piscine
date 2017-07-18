/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 13:53:31 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 13:58:41 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon {
public:
	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const & p);

	virtual void attack(void) const;

	~PlasmaRifle(void);
};

#endif
