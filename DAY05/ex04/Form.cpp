/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 12:38:35 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/11 19:00:17 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void):	_name("no_name"),
					_signed(true),
					_gradeToSign(150),
					_gradeToExec(150) {
	return;
}

Form::Form(std::string name, bool issigned, int gradeToSign, int gradeToExec):
													_name(name),
													_signed(issigned),
													_gradeToSign(gradeToSign),
													_gradeToExec(gradeToExec) {
	try {
		if (gradeToSign < 1 || gradeToExec < 1)
			throw Form::GradeTooHighException();
		if (gradeToSign > 150 || gradeToExec > 150)
			throw Form::GradeTooLowException();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
		exit(1);
	}
	return;
}

Form::Form(Form const & f): _gradeToSign(f.getGradeToSign()),
							_gradeToExec(f.getGradeToExec()) {
	*this = f;
	return;
}

std::string	Form::getName(void) const {
	return _name;
}

bool		Form::getSigned(void) const {
	return _signed;
}

int			Form::getGradeToSign(void) const {
	return _gradeToSign;
}

int			Form::getGradeToExec(void) const {
	return _gradeToExec;
}

void		Form::beSigned(Bureaucrat const & b) {
	b.signForm(_name, _signed);
	if (!_signed) _signed = true;
	return;
}

void		Form::execute(Bureaucrat const & executor) const {
		executor.executeForm(*this);
	return;
}

Form::~Form(void) {
	return;
}

Form &		Form::operator=(Form const & f) {
	_signed = f.getSigned();
	return(*this);
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Grade too low.");
}

const char* Form::GradeTooHighException::what() const throw() {
	return ("Grade too high.");
}

const char* Form::FormNotSigned::what() const throw() {
	return ("Form not signed.");
}

std::ostream & operator<<(std::ostream & o, Form const & f) {
	o	<< f.getName()
		<< ". Required grade to sign - "
		<< f.getGradeToSign()
		<< ". Required grade to execute - "
		<< f.getGradeToExec();
	if (f.getSigned()) o << ". Signed." << std::endl;
	else o << ". Unsigned." << std::endl;
	return (o);
}
