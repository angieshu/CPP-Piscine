/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 11:35:58 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/07 12:30:31 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
	ScavTrap robot("Moly");

	robot.rangeAttack("human");
	robot.meleeAttack("another robot");
	robot.takeDamage(30);
	robot.takeDamage(30);
	robot.beRepaired(80);
	robot.challengeNewcomer();
	robot.challengeNewcomer();
	robot.challengeNewcomer();
}
