/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 12:38:35 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/11 18:47:17 by ashulha          ###   ########.fr       */
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
	if (gradeToSign < 1 || gradeToExec < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExec > 150)
		throw Form::GradeTooLowException();
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
	if (b.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException();
	b.signForm(_name, _signed);
	if (!_signed) _signed = true;
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


std::ostream & operator<<(std::ostream & o, Form const & f) {
	if (f.getSigned()) o << f.getName() << " is signed.";
	else o << f.getName() << " is not signed.";
	o	<< "Required grade to sign - "
		<< f.getGradeToSign()
		<< ". Required grade to execute - "
		<< f.getGradeToExec() << std::endl;
	return (o);
}
