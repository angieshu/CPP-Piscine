/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 12:06:09 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/06 15:14:37 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>

class Fixed{
private:
	int _fixedPointValue;
	static const int _fracBits;

public:
	Fixed(void);
	Fixed(Fixed const & n);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed & operator=(Fixed const & res);

	~Fixed(void);
};

#endif
