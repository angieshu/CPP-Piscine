/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 12:05:27 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/11 19:06:25 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
private:
	std::string _formName;
	std::string _target;
public:
	Intern(void);
	Intern(Intern const & i);

	std::string getFormName(void) const;
	std::string getTarget(void) const;

	Form* 	makeForm(std::string formName, std::string target);

	~Intern(void);

	Intern&	operator=(Intern const & i);

	class UnknownFormName: public std::exception {
		virtual const char * what() const throw();
	};

};

std::ostream & operator<<(std::ostream & o, Intern const & i);

#endif
