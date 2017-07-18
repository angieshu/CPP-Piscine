/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 11:56:48 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/08 13:12:00 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include <string>

class Victim {
private:
	std::string _name;
public:
	Victim(void);
	Victim(std::string name);
	Victim(Victim const & v);

	std::string getName(void) const;

	void setName(std::string const & name);

	virtual void getPolymorphed(void) const;

	~Victim(void);

	Victim & operator=(Victim const & v);
};

std::ostream & operator<<(std::ostream & o, Victim const & v);

#endif
