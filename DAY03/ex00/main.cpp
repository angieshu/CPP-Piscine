/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 11:35:58 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/07 11:47:13 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
	FragTrap robot("Peter");

	robot.rangeAttack("human");
	robot.meleeAttack("another robot");
	robot.takeDamage(70);
	robot.takeDamage(40);
	robot.beRepaired(80);
	robot.beRepaired(80);
	robot.vaulthunter_dot_exe("aliens ship");
	robot.vaulthunter_dot_exe("aliens ship");
	robot.vaulthunter_dot_exe("aliens ship");
	robot.vaulthunter_dot_exe("aliens ship");
	robot.vaulthunter_dot_exe("aliens ship");
}
