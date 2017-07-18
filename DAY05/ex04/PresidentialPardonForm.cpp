/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 11:17:48 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/11 13:03:10 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) {
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
					Form("PresidentialPardon", false, 25, 5), _target(target) {
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & p) {
	*this = p;
	return;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) {
	Form::execute(executor);

	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	return;
}

std::ostream & operator<<(std::ostream & o, PresidentialPardonForm const & p) {
	o	<< p.getName()
		<< ". Required grade to sign - "
		<< p.getGradeToSign()
		<< ". Required grade to execute - "
		<< p.getGradeToExec();
	if (p.getSigned()) o << ". Signed." << std::endl;
	else o << ". Unsigned." << std::endl;
	return (o);
}
