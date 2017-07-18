/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 15:50:05 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/11 13:03:21 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) {
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
				Form("ShrubberyCreation", false, 145, 137), _target(target) {
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & s) {
	*this = s;
	return;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	std::ofstream f;

	Form::execute(executor);
	std::string name = _target + "_shrubbery";
	f.open(name, std::ios::trunc);
	f << "\n";
	f << "               ,@@@@@@@,\n";
	f << "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n";
	f << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n";
	f << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n";
	f << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n";
	f << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n";
	f << "   `&%\\ ` /%&'    |.|        \\ '|8'\n";
	f << "       |o|        | |         | |\n";
	f << "       |.|        | |         | |\n";
	f << "     \\/ ._\\//_/__/  ,\\_//___\\/.  \\_//__/_\n";

	f.close();
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	return;
}

std::ostream & operator<<(std::ostream & o, ShrubberyCreationForm const & s){
	o	<< s.getName()
		<< ". Required grade to sign - "
		<< s.getGradeToSign()
		<< ". Required grade to execute - "
		<< s.getGradeToExec();
	if (s.getSigned()) o << ". Signed." << std::endl;
	else o << ". Unsigned." << std::endl;
	return (o);
}
