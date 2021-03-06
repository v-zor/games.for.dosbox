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
#include "allegro.h"
#include "IMAGE.H"

namespace zelda
{
namespace image
{
 
int Image::load_pcx(const char *filename)
{
	PALETTE palette;

	_bmp = load_bitmap(filename, palette);
	if (!_bmp) {
		///abort_on_error("image_load_pcx : Could not load pcx from filename");
		return -1;
	}

	return 0;

}

}//namespace image
}//namespace zelda
