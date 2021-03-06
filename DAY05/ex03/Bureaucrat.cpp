/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 11:35:52 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/11 19:05:24 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


Bureaucrat::Bureaucrat(void):	_name("no_name"),
								_grade(150) {
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name) {
	if (grade < 1) throw Bureaucrat::GradeTooHighException();
	if (grade > 150) throw Bureaucrat::GradeTooLowException();
	_grade = grade;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const & b) {
	*this = b;
	return;
}

std::string	Bureaucrat::getName(void) const {
	return _name;
}

int			Bureaucrat::getGrade(void) const {
	return _grade;
}

void		Bureaucrat::incrementGrade(void) {
	if (_grade == 1) throw Bureaucrat::GradeTooHighException();
	_grade--;
	return;
}

void		Bureaucrat::decrementGrade(void) {
	if (_grade == 150) throw Bureaucrat::GradeTooLowException();
	_grade++;
	return;
}

void		Bureaucrat::signForm(std::string name, bool issigned) const {
	if (issigned)
		std::cout	<< _name << " cannot sign "
					<< name << " Form because it's already signed." << std::endl;
	else std::cout << _name << " signes " << name << " Form" << std::endl;
	return;
}

void		Bureaucrat::executeForm(Form const & form) const {
	if (_grade > form.getGradeToExec()) throw Bureaucrat::GradeTooLowException();
	std::cout << _name << " executes " << form.getName() << " Form." << std::endl;
	return;
}

Bureaucrat::~Bureaucrat(void) {
	return;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const &b) {
	std::string & s = const_cast<std::string &>(_name);
	s = b.getName();
	_grade = b.getGrade();
	return (*this);
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low.");
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade too high.");
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & b) {
	o	<< b.getName() << ", bureaucrat grade "
		<< b.getGrade() << "." << std::endl;
	return (o);
}
