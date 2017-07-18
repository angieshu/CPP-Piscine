/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 12:00:49 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/11 18:29:00 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	Bureaucrat a("Angie", 1);
	// Bureaucrat b("Bobby", 151);
	// Bureaucrat c("Cindy", 0);
	Bureaucrat d("Den", 150);

	std::cout << a;
	std::cout << d;

	try {
		a.incrementGrade();
		d.decrementGrade();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
