/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 22:21:08 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/06 22:23:13 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include <fstream>
#include <iostream>

int main(int ac, char** av) {
	if (ac == 1) {
		std::cout << std::cin.rdbuf();
		return (0);
	}
}
