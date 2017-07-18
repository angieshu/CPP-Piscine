/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 12:09:35 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/11 19:06:39 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {
	return;
}

Intern::Intern(Intern const & i) {
	*this = i;
	return;
}

std::string		Intern::getFormName(void) const {
	return _formName;
}

std::string 	Intern::getTarget(void) const {
	return _target;
}

Form*			Intern::makeForm(std::string formName, std::string target) {
	int formIndicator = 0;
	Form* form;

	_formName = formName;
	_target = target;

	for (int i = 0; formName[i]; i++)
		formName[i] = tolower(formName[i]);

	if (formName == "shrubberycreation" || formName == "shrubbery creation")
		formIndicator = 1;
	if (formName == "robotomyrequest" || formName == "robotomy request")
		formIndicator = 2;
	if (formName == "presidentialpardon" || formName == "presidential pardon")
		formIndicator = 3;
	if (!formIndicator) throw Intern::UnknownFormName();

	if (formIndicator == 1) form = new ShrubberyCreationForm(_target);
	if (formIndicator == 2) form = new RobotomyRequestForm(_target);
	if (formIndicator == 3) form = new PresidentialPardonForm(_target);

	std::cout << "Intern creates a " << *form;
	return form;
}


Intern::~Intern(void) {
	return;
}

Intern&			Intern::operator=(Intern const & i) {
	_formName = i.getFormName();
	_target = i.getTarget();
	return (*this);
}

const char* Intern::UnknownFormName::what() const throw() {
	return ("Invalid Form name.");
}

std::ostream&	operator<<(std::ostream & o, Intern const & i) {
	(void)i;
	o	<< "Intern" << std::endl;
	return (o);
}
