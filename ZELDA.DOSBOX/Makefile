CXX=gpp.exe
CFLAGS=-O
INCLUDES= -IC:\DJGPP\ALLEGRO\INCLUDE
all: main.exe

main.exe: actor.o actorevent.o bmp.o image.o main.o
	$(CXX) -o PLAY.EXE MAIN.O BMP.O ACTOR.O ACTOREVENT.O IMAGE.O -LC:\DJGPP\ALLEGRO\LIB -lalleg


actor.o:
	$(CXX) $(INCLUDES) -c ACTOR.C
actorevent.o:
	$(CXX) $(INCLUDES) -c ACTOREVENT.C
bmp.o:
	$(CXX) $(INCLUDES) -c BMP.C
image.o:
	$(CXX) $(INCLUDES) -c IMAGE.C
main.o:
	$(CXX) $(INCLUDES) -c MAIN.C

clean:
	del *.o;
	del PLAY.EXE
