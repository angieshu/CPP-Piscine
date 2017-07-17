/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 17:31:01 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/05 18:32:35 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP
#include <iostream>
#include "Brain.hpp"

class Human {
private:
	std::string _myName;
	int _myAge;
	int _myHeight;
	int _myWeight;
	Brain const _myBrain;

public:
	Brain const &getBrain(void) const;
	Human(void);
	~Human(void);

	std::string identify(void);

};

#endif
