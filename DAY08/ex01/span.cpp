/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 12:14:00 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/14 14:20:13 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int Span::_numsAlreadyIn = 0;

Span::Span(void): _size(0) {
	return;
}

Span::Span(unsigned int size): _size(size) {
	return;
}

Span::Span(Span const & s) {
	*this = s;
	return;
}

void			Span::addNumber(int n) {
	if (_numsAlreadyIn == _size) {
		throw std::overflow_error("Container full.");
		return;
	}
	_numsAlreadyIn++;
	_lst.push_back(n);
	return;
}

int				Span::shortestSpan(void) {
	if (_numsAlreadyIn == 0 || _numsAlreadyIn == 1) {
		throw std::out_of_range("No span to find.");
		return (-1);
	}

	int num;
	int shortest;
	std::list<int> copy_lst;
	std::list<int>::const_iterator it;

	copy_lst.assign(_lst.begin(), _lst.end());
	copy_lst.sort();
	it = copy_lst.begin();
	num = *it;
	it++;
	for ( ; it != copy_lst.end(); it++) {
		if ((*it - num) < shortest) shortest = *it - num;
		num = *it;
	}
	return (shortest);
}

int				Span::longestSpan(void) {
	if (_numsAlreadyIn == 0 || _numsAlreadyIn == 1) {
		throw std::out_of_range("No pan to find.");
		return (-1);
	}

	int num;
	std::list<int> copy_lst;
	std::list<int>::const_iterator it;
	std::list<int>::const_iterator it_end;

	copy_lst.assign(_lst.begin(), _lst.end());
	copy_lst.sort();
	it_end = copy_lst.begin();
	num = *it_end;
	while (it_end != copy_lst.end()) {
		it = it_end;
		it_end++;
	}
	return (*it - num);
}

int				Span::getSize(void) const {
	return (_size);
}

int				Span::getNums(void) const {
	return (_numsAlreadyIn);
}

std::list<int>	Span::getList(void) const {
	return (_lst);
}

Span::~Span(void) {
	return;
}

Span&	Span::operator=(Span const & s) {
	_size = s.getSize();
	_numsAlreadyIn = s.getNums();
	_lst.assign(s.getList().begin(), s.getList().end());
	return(*this);
}
