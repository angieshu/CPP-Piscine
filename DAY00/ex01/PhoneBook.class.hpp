/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 15:47:09 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/03 20:44:02 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <string>

class PhoneBook {
public:
	std::string f_name;
	std::string l_name;
	std::string n_name;
	std::string login;
	std::string p_address;
	std::string e_address;
	std::string ph_number;
	std::string b_day;
	std::string f_meal;
	std::string uw_color;
	std::string secret;
	PhoneBook();
	void add(void);
	void search(void);
	~PhoneBook();
};

#endif
