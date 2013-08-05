/*
 Copyright (C) Johan Ceuppens 2013
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 2 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include <stdio.h>
#include <stdlib.h>

#include "DBVECTOR.H"

namespace dosbox
{
namespace std
{

template<typename T>
vector<T>::vector()
{
	_s = NULL;
	_len = 0;
	_maxlen = 0;
}

template<typename T>
vector<T>::vector(int sz)
{
	_s = (T *)malloc(sz * sizeof(T));
	_len = 0;
	_maxlen = sz;
}


template<typename T>
vector<T>::~vector()
{
	if (_s != NULL)
		free(_s);
}

template<typename T>
int vector<T>::size()
{
	return _len;
}

template<typename T>
void vector<T>::push_back(T const& t)
{
	if (_len > _maxlen) {	
		if (_s != NULL)
			free(_s);
		_len ++;
		_maxlen ++;
		_s = malloc(_len * sizeof(T));
	}

	((T*)_s)[_len - 1] = const_cast<T&>(t);	
}

template<typename T>
T const& vector<T>::operator[](int i)
{
	if (i < _maxlen)
		return ((T *)_s)[i];
}

template<typename T>
const vector<T>& vector<T>::operator=(vector<T>& v)
{
	if (*this == *v) {
		return;
	}
	return *this;
}	

}//namespace std
}//namespace dosbox	
