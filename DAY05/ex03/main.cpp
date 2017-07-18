/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 12:00:49 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/11 19:03:57 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void) {
	Intern someRandomIntern;
	Form* rrf;
	try {
		rrf = someRandomIntern.makeForm("robOtomy rEquest","Bender");
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	Form* bbb;
	try {
		bbb = someRandomIntern.makeForm("Billy", "Ben");
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
