/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 11:42:17 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/05 10:21:35 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP
#include <string>

class Pony{
private:
	std::string _name;
public:
	Pony(std::string name);
	~Pony(void);

	std::string meal;
	static int years_old;
	void favorite_meal(std::string meal_);
	void hobbie(int choice);
};

#endif
