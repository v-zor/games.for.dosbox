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
#ifndef DB_IMAGE_H
#define DB_IMAGE_H

#include <stdio.h>
#include <stdlib.h>
#include "allegro.h"

namespace zelda
{
namespace image
{

class Image 
{
	public:
	Image() {}
	virtual ~Image() {}
	int load_pcx(const char *filename);
	
	BITMAP *get_bmp() { return _bmp; }
	
	private:
	BITMAP *_bmp;	
};

}//namespace image
}//namespace zelda
#endif
