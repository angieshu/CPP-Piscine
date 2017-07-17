/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 12:43:54 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/05 12:34:42 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie{
private:
	std::string _name;
	std::string _type;
public:
	void announce(void);
	std::string getName(void);
	Zombie(std::string name, std::string type);
	~Zombie(void);
};

#endif
