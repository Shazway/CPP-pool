/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:12:51 by tmoragli          #+#    #+#             */
/*   Updated: 2022/09/10 20:42:48 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include "Colors.hpp"
#include <iostream>

template <class T>
class Array
{
private:
	T*				_array;
	unsigned int	_size;
	//-----GET ELEMENT FROM ARRAY AT INDEX---//
	T	getElem(unsigned int index) const{
		return (_array[index]);
	}

public:
	//------CONSTRUCT ARRAY-----//
	Array(): _array(), _size() { };

	//------CONSTRUCT ARRAY FROM SIZE-----//
	Array(unsigned int const size): _size(size){
		_array = new T[size];
	};

	//------CONSTRUCT ARRAY FROM COPY-----//
	Array(Array<T> const& copy): _array(), _size(0){
		*this = copy;
	}

	//------DELETE ARRAY (Destructor)----//
	~Array(){delete [] _array;}

	//------OVERLOAD OF =------//
	Array&	operator=(Array<T> const& assign)
	{
		delete [] _array; //Free the array first
		_array = new T[assign._size];
		_size = assign._size;
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = assign.getElem(i);
		return (*this);
	}

	//------OVERLOAD OF []------//
	T&	operator[](unsigned int index)
	{
		if (index < 0 || index >= _size)
			throw (std::out_of_range("Index is out of array size"));
		return (_array[index]);
	}
	int	getSize() {return (_size);}
};

#endif