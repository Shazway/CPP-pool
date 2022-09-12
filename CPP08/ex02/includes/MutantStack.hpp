/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:56:03 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/12 15:38:31 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

#define BLACK "\e[1;30m"
#define RED "\e[1;31m"
#define GREEN "\e[1;32m"
#define YELLOW "\e[1;33m"
#define BLUE "\e[1;34m"
#define MAGENTA "\e[1;35m"
#define CYAN "\e[1;36m"
#define WHITE "\e[1;37m"
#define END "\e[0m"

template <typename T>
class MutantStack: public std::stack<T>
{
public:
	MutantStack<T>();
	MutantStack<T>(MutantStack const& copy);
	~MutantStack<T>();

	MutantStack& operator=(MutantStack const& assign);
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin();
	iterator end();
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	const_iterator cbegin() const;
	const_iterator cend() const;

	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	reverse_iterator rbegin();
	reverse_iterator rend();
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
	const_reverse_iterator crbegin() const;
	const_reverse_iterator crend() const;
};

template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>() { };

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &copy): std::stack<T>(copy){ };

template <typename T>
MutantStack<T>::~MutantStack() { };

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const& copy)
{
	std::stack<T>::operator=(copy);
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(){
	return (std::stack<T>::c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(){
	return (std::stack<T>::c.end());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin(){
	return (std::stack<T>::c.rbegin());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend(){
	return (std::stack<T>::c.rend());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin() const{
	return (static_cast<const T>(std::stack<T>::c.cbegin()));
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend() const{
	return (static_cast<const T>(std::stack<T>::c.cend()));
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin() const{
	return (static_cast<const T>(std::stack<T>::c.crbegin()));
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend() const{
	return (static_cast<const T>(std::stack<T>::c.crend()));
}

#endif