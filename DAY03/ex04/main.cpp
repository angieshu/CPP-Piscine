/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 11:35:58 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/07 17:04:57 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void) {
	ClapTrap a("Annie");
	FragTrap b("Bobbie");
	ScavTrap c("Carmen");
	NinjaTrap d("David");
	SuperTrap robot("Chris");

	robot.rangeAttack("human");
	robot.meleeAttack("another robot");
	robot.takeDamage(30);
	robot.takeDamage(50);
	robot.takeDamage(30);
	robot.beRepaired(80);
	robot.beRepaired(30);
	robot.vaulthunter_dot_exe(a.getName());
	robot.vaulthunter_dot_exe(b.getName());
	robot.vaulthunter_dot_exe(c.getName());
	robot.ninjaShoebox(a);
	robot.ninjaShoebox(b);
	robot.ninjaShoebox(c);
	robot.ninjaShoebox(d);
}
