/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 13:00:16 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/05 12:34:37 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

void Zombie::announce(void){
	std::cout << "<" << this->_name << "(" << this->_type << ")>";
	if (this->_type == "vegan")
		std::cout << "GGGGRRRAAAAIINSSSSS....";
	else if (this->_type == "brain eater")
		std::cout << "BBRRRRRAAAIIIINSSSSS....";
	else if (this->_type == "fresh eater")
		std::cout << "MM... PEOPLE.... YUMMMMMY..";
	std::cout << std::endl;
}

std::string Zombie::getName(void){
	return (this->_name);
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type){
	return;
}

Zombie::~Zombie(void){
	return;
}
