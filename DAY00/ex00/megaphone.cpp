/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 13:17:37 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/03 18:58:14 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int ac, char **av){
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	for (int i = 1; i < ac; i++){
		for (int j = 0; av[i][j] != 0; j++){
			av[i][j] = toupper(av[i][j]);
			std::cout << av[i][j];
		}
	}
	std::cout << std::endl;
}
