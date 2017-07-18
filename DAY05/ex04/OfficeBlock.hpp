/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 12:42:37 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/11 19:09:33 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
#define OFFICEBLOCK_HPP

#include "Intern.hpp"
#include "Bureaucrat.hpp"

class OfficeBlock {
private:
	Intern _i;
	Bureaucrat _bSign;
	Bureaucrat _bExec;
	std::string _formName;
	std::string _target;

	OfficeBlock(OfficeBlock const &ob);
	OfficeBlock & operator=(OfficeBlock const &ob);
public:
	OfficeBlock(void);
	OfficeBlock(Intern const &i, Bureaucrat const &bSign, Bureaucrat const &bExec);

	void setIntern(Intern const & i);
	void setSignB(Bureaucrat const & sb);
	void setExecB(Bureaucrat const &eb);

	void doBureaucracy(std::string formName, std::string target);

	~OfficeBlock(void);

	static int intern;
	static int buSign;
	static int buEx;

	class GradeTooLowException: public std::exception {
		virtual const char * what() const throw();
	};

	class UnknownFormName: public std::exception {
		virtual const char * what() const throw();
	};

	class FormNotSigned: public std::exception {
		virtual const char * what() const throw();
	};

	class ExecutingBureaucratNotSetUp: public std::exception {
		virtual const char * what() const throw();
	};

	class SigningBureaucratNotSetUp: public std::exception {
		virtual const char * what() const throw();
	};

	class InternNotSetUp: public std::exception {
		virtual const char * what() const throw();
	};

};

std::ostream & operator<<(std::ostream & o, OfficeBlock const & ob);

#endif
