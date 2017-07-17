/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 10:14:43 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/07 16:51:24 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap: virtual public ClapTrap {
public:
	FragTrap(void);
	FragTrap(std::string const & name);
	FragTrap(FragTrap const & robot);

	void vaulthunter_dot_exe(std::string const & target);

	~FragTrap(void);
};

#endif
