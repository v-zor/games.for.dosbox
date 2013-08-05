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
#ifndef DB_VECTOR_H
#define DB_VECTOR_H

#include <stdio.h>
#include <stdlib.h>

namespace dosbox
{
namespace std 
{

template<typename T>
class vector 
{
	public:
	vector();
	vector(int sz);
	virtual ~vector();

	private:
	void *_s;
	int _len;
	int _maxlen;

	public:
	void push_back(T const& t);
	int size();
	void reserve(int sz);
	//void *deepcopy();
	//void *shallowcopy();
	const T& operator[](int i);
	const vector<T>& operator=(vector<T>& s);
	//bool operator==(vector s);

};

}
}
#endif	
