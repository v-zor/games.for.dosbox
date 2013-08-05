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
#include <string.h>

#include "DBSTRING.H"

namespace dosbox
{
namespace std
{

string::string(const char *s)
{
	int i = 0;
	int len = strlen(s);
	if (_s == NULL)
		_s = (char *)malloc(len);

	while (*_s++ = *s++ && i++)
		if (i >= strlen(s))
			break; 	

}

string::string()
{
	_s = (char *)malloc(1);
	memcpy(_s, "\0", 1);	
}

string::~string()
{
	free(_s);
}

char string::operator[](int i)
{

	return _s[i];

}

string string::operator=(string s)
{
	int i = 0;
	int len = strlen(s.deepcopy());

	free(_s);
	_s = (char *)malloc(len);
	const char *si = (char *)s.deepcopy();
	while (*_s++ = *si++ && i++)
		if (i >= strlen(si))
			break; 	
	return *this;
}	

bool string::operator==(string s)
{
	int i = 0;
	int len = strlen(s.deepcopy());

	free(_s);
	_s = (char *)malloc(len);
	const char *si = (char *)s.deepcopy();
	while (*_s++ == *si++ && i++)
		if (i >= strlen(si))
			return true; 	
	return false;
}	

const char *string::deepcopy()
{
	return (const char *)_s;	
}

const char*string::shallowcopy()
{
	int i, len = strlen(_s);
	char *s = (char *)malloc(len);
	while (*s++ = *_s++)
		if (i >= len)
			break;

	return s;	
}

const char*string::c_str()
{
	int i, len = strlen(_s);
	char *s = (char *)malloc(len);
	while (*s++ = *_s++)
		if (i >= len)
			break;

	return s;	
}

}//namespace std
}//namespace dosbox	
