/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 10:49:35 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/05 12:31:13 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int isNumber(std::string s){
	for (int i = 0; s[i] != 0; i++)
		if (!isdigit(s[i]))
			return (0);
	return (1);
}

int main(void){
	std::string inp;
	int n;

	std::cout << "How many zombies would you like? " << std::endl;
	std::getline(std::cin, inp);
	if (std::cin.eof()) exit(0);
	while (1){
		if (isNumber(inp)){
			n = std::stoi(inp);
			break;
		}
		std::cout << "Please anter a valid number: ";
		std::getline(std::cin, inp);
		if (std::cin.eof()) exit(0);
	}
	ZombieHorde z = ZombieHorde(n);
	z.announce();
	return (0);
}
