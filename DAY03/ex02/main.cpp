/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 11:35:58 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/07 13:37:18 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	FragTrap robot("Peter");

	robot.rangeAttack("human");
	robot.meleeAttack("another robot");
	robot.takeDamage(30);
	robot.takeDamage(50);
	robot.takeDamage(30);
	robot.beRepaired(80);
	robot.beRepaired(30);
	robot.vaulthunter_dot_exe("aliens ship");
	robot.vaulthunter_dot_exe("aliens ship");
	robot.vaulthunter_dot_exe("aliens ship");

	ScavTrap rob("Moly");
	
	rob.rangeAttack("human");
	rob.meleeAttack("another robot");
	rob.takeDamage(30);
	rob.takeDamage(40);
	rob.beRepaired(10);
	rob.beRepaired(50);
	rob.challengeNewcomer();
	rob.challengeNewcomer();
	rob.challengeNewcomer();

}
