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
#include "bmp.h"

PBITMAPFILEHEADER file_header;
PBITMAPINFOHEADER info_header;


char *fill()
{
	char *buffer;

	FILE *fp = fopen("test.bmp", "r");

	fseek(fp, 0, SEEK_END);
	int length = ftell(fp);

	buffer = (char *)malloc(length * sizeof(char));

	fread(buffer, sizeof(char), length+1, fp);

	file_header = (PBITMAPFILEHEADER)(&buffer[0]);
	info_header = (PBITMAPINFOHEADER)(&buffer[0] + sizeof(BITMAPFILEHEADER));

	return buffer;

}

