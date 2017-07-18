/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 11:17:55 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/11 13:01:04 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form {
using Form::execute;
private:
	std::string _target;
	PresidentialPardonForm(void);
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & p);

	virtual void execute(Bureaucrat const & executor);

	~PresidentialPardonForm(void);
};

std::ostream & operator<<(std::ostream & o, PresidentialPardonForm const & p);

#endif
