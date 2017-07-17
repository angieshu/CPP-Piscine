/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 15:05:39 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/07 15:40:26 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap {
public:
	NinjaTrap(void);
	NinjaTrap(std::string const & name);
	NinjaTrap(NinjaTrap const & robot);

	void ninjaShoebox(ClapTrap & riv);
	void ninjaShoebox(FragTrap & riv);
	void ninjaShoebox(ScavTrap & riv);
	void ninjaShoebox(NinjaTrap & riv);

	~NinjaTrap(void);
};

#endif
