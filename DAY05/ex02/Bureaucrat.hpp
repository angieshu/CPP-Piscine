/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 11:27:48 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/11 18:31:14 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Form;

class Bureaucrat {
private:
	std::string const _name;
	int _grade;

public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & b);

	std::string	getName(void) const;
	int			getGrade(void) const;

	void		incrementGrade(void);
	void		decrementGrade(void);
	void		signForm(std::string name, bool issigned) const;
	void		executeForm(Form const & form) const;

	~Bureaucrat(void);

	Bureaucrat&	operator=(Bureaucrat const & b);

	class GradeTooLowException: public std::exception {
		virtual const char * what() const throw();
	};

	class GradeTooHighException: public std::exception {
		virtual const char * what() const throw();
	};
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & b);

#endif
