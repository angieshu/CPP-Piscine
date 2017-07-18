/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 16:46:15 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/11 12:59:04 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "Form.hpp"

class RobotomyRequestForm: public Form {
using Form::execute;
private:
	std::string	_target;
	RobotomyRequestForm(void);
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & r);

	virtual void execute(Bureaucrat const & executor);

	~RobotomyRequestForm(void);
};

std::ostream & operator<<(std::ostream & o, RobotomyRequestForm const & r);

#endif
