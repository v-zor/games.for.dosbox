CXX=gpp.exe
CFLAGS=-O

all: main

main:
	$(CXX) -IC:\DJGPP\ALLEGRO\INCLUDE -c BMP.C
	$(CXX) -IC:\DJGPP\ALLEGRO\INCLUDE -c MAIN.C

	$(CXX) -o MAIN MAIN.O BMP.O -LC:\DJGPP\LIB -lalleg

clean:
	del BMP.O;
	del MAIN.O;
	del MAIN.EXE
