/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 12:13:06 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/05 12:26:14 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap(void){
	Pony* alicia = new Pony("Alicia");
	alicia->favorite_meal("ice cream");
	alicia->hobbie(8);
	delete alicia;
}

void ponyOnTheStack(void){
	Pony bob = Pony("Bobby");

	bob.favorite_meal("spagetti with meat balls");
	bob.hobbie(3);
	return;
}

int main(void){
	std::cout << "ponyOnTheHeap:" << std::endl;
	ponyOnTheHeap();
	std::cout << std::endl << "ponyOnTheStack:" << std::endl;
	ponyOnTheStack();
}
