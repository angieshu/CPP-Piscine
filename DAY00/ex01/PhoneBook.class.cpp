/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 18:10:50 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/03 21:47:56 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.class.hpp"

void PhoneBook::search(void){
	std::string _f_name = this->f_name;
	std::string _l_name = this->l_name;
	std::string _n_name = this->n_name;

	if (_f_name.size() > 10)
		_f_name.replace(9, _f_name.size(), ".");
	if (_l_name.size() > 10)
		_l_name.replace(9, _l_name.size(), ".");
	if (_n_name.size() > 10)
		_n_name.replace(9, _n_name.size(), ".");

	std::cout << std::setw(10) << _f_name << "|";
	std::cout << std::setw(10) << _l_name << "|";
	std::cout << std::setw(10) << _n_name << std::endl;
}

void PhoneBook::add(void){
	std::cout << "First name: ";
	std::getline(std::cin, this->f_name);

	std::cout << "Last name: ";
	std::getline(std::cin, this->l_name);

	std::cout << "Nickname: ";
	std::getline(std::cin, this->n_name);

	std::cout << "Login: ";
	std::getline(std::cin, this->login);

	std::cout << "Postal Address: ";
	std::getline(std::cin, this->p_address);

	std::cout << "Email: ";
	std::getline(std::cin, this->e_address);

	std::cout << "Phone number: ";
	std::getline(std::cin, this->ph_number);

	std::cout << "Birthday: ";
	std::getline(std::cin, this->b_day);

	std::cout << "Favorite meal: ";
	std::getline(std::cin, this->f_meal);

	std::cout << "Undrweare color: ";
	std::getline(std::cin, this->uw_color);

	std::cout << "Darkest secret: ";
	std::getline(std::cin, this->secret);
}

PhoneBook::PhoneBook(void){
}

PhoneBook::~PhoneBook(void){
}
