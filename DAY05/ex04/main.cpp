/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 12:00:49 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/11 19:16:29 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int main(void) {
	Intern idiotOne;
	Bureaucrat hermes = Bureaucrat("Hermes Conrad", 118);
	// Bureaucrat hermes = Bureaucrat("Hermes Conrad", 148);
	Bureaucrat bob = Bureaucrat("Bobby Bobson", 47);
	// Bureaucrat bob = Bureaucrat("Bobby Bobson", 147);
	OfficeBlock ob;

	ob.setIntern(idiotOne);
	ob.setSignB(bob);
	ob.setExecB(hermes);

	try {
		ob.doBureaucracy("shrubberycreation", "humanity");
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
