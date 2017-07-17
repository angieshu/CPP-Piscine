/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 15:44:07 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/05 11:16:11 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.class.hpp"
using namespace std;

int main(void)
{
	PhoneBook ph[8];
	int index = 0;
	std::string cmd;

	while (1)
	{
		std::cout << ">>  ";
		std::getline(std::cin, cmd);
		if (std::cin.eof()) exit(0);
		for (int i = 0; cmd[i] != 0; i++)
			cmd[i] = tolower(cmd[i]);
		if (cmd == "add"){
			if (index == 8){
				std::cout << "Phone Book is full." << std::endl;
				continue;
			}
			ph[index].add();
			index++;
		}
		else if (cmd == "search"){
			if (index == 0){
				std::cout << "No contacts added." << std::endl;
				continue;
			}
			for (int i = 0; i < index; i++){
				std::cout << std::setw(10) << i << "|";
				ph[i].search();
			}
		}
		else if (cmd == "exit")
			break;
		else
			continue;
	}
}
