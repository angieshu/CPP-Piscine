/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 18:55:14 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/14 11:46:55 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>


template <typename T>

int easyfind(T const & container, int n) {
	typename T::const_iterator it;

	for (it = container.begin(); it != container.end(); ++it) {
		if (*it == n) return (*it);
	}
	throw std::range_error("No number in container.");
	return (-1);
}
