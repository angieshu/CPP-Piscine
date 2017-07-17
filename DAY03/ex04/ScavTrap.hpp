/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 11:49:29 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/07 13:34:19 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
public:
	ScavTrap(void);
	ScavTrap(std::string const & name);
	ScavTrap(ScavTrap const & robot);

	void challengeNewcomer(void);

	~ScavTrap(void);
};

#endif
