/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 15:49:00 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/07 16:45:18 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap {
public:
	SuperTrap(void);
	SuperTrap(std::string const & name);
	SuperTrap(SuperTrap const & robot);

	~SuperTrap(void);
};

#endif
