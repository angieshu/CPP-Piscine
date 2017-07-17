/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 14:40:03 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/05 10:02:13 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieEvent.hpp"

int main(void){
	ZombieEvent z;
	ZombieEvent x;
	ZombieEvent n;

	z.randomChump();
	x.randomChump();
	n.randomChump();
	return (0);
}
