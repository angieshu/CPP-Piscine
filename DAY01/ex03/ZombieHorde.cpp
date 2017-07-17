/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 10:25:39 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/05 12:55:06 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _n(n){
	this->_zommies = new Zombie*[n];
	for (int i = 0; i < n; i++)
		this->_zommies[i] = randomZombie();
}

Zombie* ZombieHorde::randomZombie(void){
	std::string type;
	std::string name;
	std::string names[20] = {"James", "Mary", "John", "Patricia", "Robert", "Jennifer",
							"Michael", "Elizabeth", "William", "Linda", "David", "Barbara",
							"Richard", "Susan", "Joseph", "Jessica", "Thomas", "Margaret",
							"Charles", "Sarah"};
	srand(time(NULL));
	name = names[(rand() % 20)];
	std::cout << "Zombie " << name << " created." << std::endl;
	std::cout << "Select zombie type ([1] - \"vegan\", [2] - \"brain eater\" or [3] - \"fresh eater\"): ";
	std::getline(std::cin, type);
	if (std::cin.eof()) exit(0);
	while(1){
		if (type == "1"){
			type = "vegan";
			break;
		}
		else if (type == "2"){
			type = "brain eater";
			break;
		}
		else if (type == "3"){
			type = "fresh eater";
			break;
		}
		else{
			std::cout << "Please enter number 1, 2 or 3: ";
			std::getline(std::cin, type);
			if (std::cin.eof()) exit(0);
		}
	}
	return (new Zombie(name, type));
}

void ZombieHorde::announce(void){
	for (int i = 0; i < this->_n; i++)
		this->_zommies[i]->getName();
}

ZombieHorde::~ZombieHorde(void){
	for (int i = 0; i < this->_n; i++){
		std::cout << this->_zommies[i]->getName() << " died." << std::endl;
		delete this->_zommies[i];
	}
	delete this->_zommies;
}
