/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 12:38:37 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/11 18:56:45 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form {
private:
	std::string const	_name;
	bool				_signed;
	int const			_gradeToSign;
	int const			_gradeToExec;

public:
	Form(void);
	Form(std::string name, bool issigned, int gradeToSign, int gradeToExec);
	Form(Form const & f);

	std::string		getName(void) const;
	bool			getSigned(void) const;
	int				getGradeToSign(void) const;
	int				getGradeToExec(void) const;

	void			beSigned(Bureaucrat const & b);
	virtual void	execute(Bureaucrat const & executor) const;


	~Form(void);

	Form &				operator=(Form const & f);

	class GradeTooLowException: public std::exception {
		virtual const char * what() const throw();
	};

	class GradeTooHighException: public std::exception {
		virtual const char * what() const throw();
	};

	class FormNotSigned: public std::exception {
		virtual const char * what() const throw();
	};

};

std::ostream &			operator<<(std::ostream & o, Form const & f);

#endif
