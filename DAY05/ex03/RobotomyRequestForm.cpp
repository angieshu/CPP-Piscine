/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 17:06:54 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/11 16:05:08 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// int RobotomyRequestForm::_robotomize = 0;

RobotomyRequestForm::RobotomyRequestForm(void) {
	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
				Form("RobotomyRequest", false, 72, 45), _target(target) {
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & r) {
	*this = r;
	return;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) {
	Form::execute(executor);
	system("afplay mixer_1.wav ");
	srand(time(NULL));
	int _robotomize = rand() % 57;
	if ((_robotomize % 2) == 0)
		std::cout << _target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Failure." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	return;
}

std::ostream & operator<<(std::ostream & o, RobotomyRequestForm const & r) {
	o	<< r.getName()
		<< ". Required grade to sign - "
		<< r.getGradeToSign()
		<< ". Required grade to execute - "
		<< r.getGradeToExec();
	if (r.getSigned()) o << ". Signed." << std::endl;
	else o << ". Unsigned." << std::endl;
	return (o);
}
