/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 11:35:58 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/07 15:37:24 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void) {
	ClapTrap a("Annie");
	FragTrap b("Bobbie");
	ScavTrap c("Carmen");
	NinjaTrap d("David");
	NinjaTrap robot("Max");

	robot.rangeAttack("human");
	robot.meleeAttack("another robot");
	robot.takeDamage(30);
	robot.takeDamage(50);
	robot.takeDamage(30);
	robot.beRepaired(80);
	robot.beRepaired(30);
	robot.ninjaShoebox(a);
	robot.ninjaShoebox(b);
	robot.ninjaShoebox(c);
	robot.ninjaShoebox(d);
}
