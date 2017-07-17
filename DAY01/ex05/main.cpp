/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 16:57:30 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/05 17:56:15 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

int main(void) {
	Human bob;

		std::cout << bob.identify() << std::endl;
		std::cout << bob.getBrain().identify() << std::endl;

}
