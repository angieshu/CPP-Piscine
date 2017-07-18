/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 12:42:42 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/11 19:14:42 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

int OfficeBlock::intern = 0;
int OfficeBlock::buSign = 0;
int OfficeBlock::buEx = 0;

OfficeBlock::OfficeBlock(void) {
	return;
}

OfficeBlock::OfficeBlock(Intern const &i, Bureaucrat const &bSign, Bureaucrat const &bExec):
										_i(i), _bSign(bSign), _bExec(bExec) {
	intern++;
	buSign++;
	buEx++;
	return;
}

OfficeBlock::OfficeBlock(OfficeBlock const & ob) {
	(void)ob;
	return;
}

void OfficeBlock::setIntern(Intern const & i) {
	_i = i;
	intern++;
	return;
}

void OfficeBlock::setSignB(Bureaucrat const & b) {
	_bSign = b;
	buSign++;
	return;
}

void OfficeBlock::setExecB(Bureaucrat const & b) {
	_bExec = b;
	buEx++;
	return;
}

void OfficeBlock::doBureaucracy(std::string formName, std::string target) {
	if (!intern)
		throw OfficeBlock::InternNotSetUp();
	if (!buSign)
		throw OfficeBlock::SigningBureaucratNotSetUp();
	if (!buEx)
		throw OfficeBlock::ExecutingBureaucratNotSetUp();
	if (formName != "shrubberycreation" && formName != "shrubbery creation" &&
		formName != "robotomyrequest" && formName != "robotomy request" &&
		formName != "presidentialpardon" && formName != "presidential pardon")
		throw OfficeBlock::UnknownFormName();
	Form* form = _i.makeForm(formName, target);
	if (_bSign.getGrade() > form->getGradeToSign())
		throw OfficeBlock::GradeTooLowException();
	form->beSigned(_bSign);
	if (!form->getSigned())
		throw OfficeBlock::FormNotSigned();
	if (_bExec.getGrade() > form->getGradeToExec())
		throw OfficeBlock::GradeTooLowException();
	form->execute(_bExec);
	return;
}

OfficeBlock::~OfficeBlock(void) {
	return;
}

OfficeBlock & OfficeBlock::operator=(OfficeBlock const &ob) {
	(void)ob;
	return(*this);
}

const char* OfficeBlock::GradeTooLowException::what() const throw() {
	return ("Grade too low.");
}

const char* OfficeBlock::UnknownFormName::what() const throw() {
	return ("Invalid Form name.");
}

const char* OfficeBlock::FormNotSigned::what() const throw() {
	return ("Form not signed.");
}

const char* OfficeBlock::ExecutingBureaucratNotSetUp::what() const throw() {
	return ("No executing bureaucrat.");
}

const char* OfficeBlock::SigningBureaucratNotSetUp::what() const throw() {
	return ("No signing bureaucrat.");
}

const char* OfficeBlock::InternNotSetUp::what() const throw() {
	return ("No intern.");
}


std::ostream & operator<<(std::ostream & o, OfficeBlock const & ob) {
	(void)ob;
	o << "OfficeBlock" << std::endl;
	return (o);
}
