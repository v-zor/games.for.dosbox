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
#include "allegro.h"

int main(int argc, char *argv[])
{
	BITMAP *buffer;

	allegro_init();
	install_keyboard();

	if (set_gfx_mode(GFX_SAFE, 640, 480, 0, 0) != 0) {
		set_gfx_mode(GFX_TEXT, 0, 0, 0, 0);
		allegro_message("Unable to set gfx mode\n%s\n", allegro_error);
		return 1;
	}

	buffer = create_bitmap(SCREEN_W, SCREEN_H);




	while (!key[KEY_ESC]) {
		blit(buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);

	}

	destroy_bitmap(buffer);
	return 0;
}
