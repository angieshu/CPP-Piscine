/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 14:22:54 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/14 16:21:27 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <list>
#include <stack>

template<typename T>
class MutantStack: public std::stack<T> {
private:
	std::stack<T>	_stack;
	std::list<T>	_list;
public:
	MutantStack(void) {
		std::stack<T> _stack;
		std::list<T> _list;
	}
	MutantStack(MutantStack const & m) {*this = m;}

	void push(T t) {
		_stack.push(t);
		_list.push_back(t);
	}
	void pop() {
		_stack.pop();
		_list.pop_back();
	}
	bool empty(void) const {
		if (_stack.size() == 0)
			return (true);
		return(false);
	}

	size_t size(void) {
		return _stack.size();
	}

	T const & top(void) {
		return (_stack.top());
	}


	~MutantStack(void) {}

	typedef typename std::list<T>::iterator iterator;
	iterator begin(void) {
		return (_list.begin());
	}
	iterator end(void) {
		return (_list.end());
	}
};

#endif
