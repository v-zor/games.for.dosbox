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
#ifndef DB_ACTORMAILBOX_H
#define DB_ACTORMAILBOX_H

#include <stdio.h>
#include <stdlib.h>
#include "dbvector.h"

class ActorMailbox
{
	public:
	ActorMailbox();
	virtual ~ActorMailbox();
	
	void *dispatch(const char *message);
	
	protected:
	template<typename R, typename F, typename S> 
	R apply(F f, S args);
	/////stl::std::vector<> _mailbox;
};

#endif	
