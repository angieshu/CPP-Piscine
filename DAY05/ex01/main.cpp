/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 12:00:49 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/11 18:49:30 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main(void) {
	Bureaucrat	a("Angie", 1);
	// Bureaucrat b("Bobby", 151);
	// Bureaucrat c("Cindy", 0);
	Bureaucrat	d("Den", 150);
	Form		f1("I-9413", true, 137, 5);
	Form		f2("I-5613", false, 137, 5);

	std::cout << a;
	std::cout << d;

	try {
		f1.beSigned(d);
		f1.beSigned(a);
		f2.beSigned(a);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	// a.incrementGrade();
	// d.decrementGrade();
}
