/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 13:56:57 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/05 11:38:01 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <time.h>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void){
	return;
}

ZombieEvent::~ZombieEvent(void){
	std::cout << this->_name << " just died :'(" << std::endl;
	delete _zommie;
	return;
}

void ZombieEvent::setZombieType(void){
	std::cout << "Select zombie type ([1] - \"vegan\", [2] - \"brain eater\" or [3] - \"fresh eater\"): ";
	std::getline(std::cin, this->_type);
	if (std::cin.eof()) exit(0);
	while(1){
		if (this->_type == "1"){
			this->_type = "vegan";
			break;
		}
		else if (this->_type == "2"){
			this->_type = "brain eater";
			break;
		}
		else if (this->_type == "3"){
			this->_type = "fresh eater";
			break;
		}
		else{
			std::cout << "Please enter number 1, 2 or 3: ";
			std::getline(std::cin, this->_type);
			if (std::cin.eof()) exit(0);
		}
	}
}

void ZombieEvent::randomChump(void){
	std::string names[20] = {"James", "Mary", "John", "Patricia", "Robert", "Jennifer",
							"Michael", "Elizabeth", "William", "Linda", "David", "Barbara",
							"Richard", "Susan", "Joseph", "Jessica", "Thomas", "Margaret",
							"Charles", "Sarah"};
	srand(time(NULL));
	this->_name = names[(rand() % 20)];
	std::cout << "Zombie " << this->_name << " created." << std::endl;
	this->_zommie = newZombie(this->_name);
	this->_zommie->announce();
}

Zombie* ZombieEvent::newZombie(std::string name){
	this->setZombieType();
	return (new Zombie(name, this->_type));
}
