/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 12:03:12 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/14 14:20:01 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <list>

class Span {
private:
	int				_size;
	static int		_numsAlreadyIn;
	std::list<int>	_lst;

	Span(void);
public:
	Span(unsigned int size);
	Span(Span const & s);

	void			addNumber(int n);
	int				shortestSpan(void);
	int				longestSpan(void);

	int				getSize(void) const;
	int				getNums(void) const;
	std::list<int>	getList(void) const;

	~Span(void);

	Span&	operator=(Span const & s);
};

#endif
