/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 12:00:49 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/11 18:55:49 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
	Bureaucrat	a("Angie", 1);
	Bureaucrat	d("Den", 150);
	ShrubberyCreationForm h("home");
	RobotomyRequestForm r("RRRRROBB");
	PresidentialPardonForm p("My friend");

	std::cout << a;
	std::cout << d;

	try {
		h.beSigned(a);
		h.execute(a);
		h.execute(d);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		r.beSigned(a);
		r.execute(a);
		// r.execute(d);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		p.beSigned(a);
		p.execute(a);
		// p.execute(d);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
