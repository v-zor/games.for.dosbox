CXX=gpp.exe
CFLAGS=-O
LIBSTLDOSINCLUDES= -IC:\DJGPP\LIBSTL
LIBSTLDOSLIBS= -LC:\DJGPP\LIBSTL
INCLUDES= -IC:\DJGPP\ALLEGRO\INCLUDE
LIBS= -LC:\DJGPP\ALLEGRO\LIB
all: main.exe

main.exe: actor.o actormailbox.o actorevent.o bmp.o image.o main.o
	$(CXX) -o PLAY.EXE MAIN.O BMP.O ACTOR.O ACTORMAILBOX.O ACTOREVENT.O IMAGE.O $(LIBS) -lalleg $(LIBSTLDOSLIBS) -lstl-dos

actor.o:
	$(CXX) $(INCLUDES) -c ACTOR.CPP
actormailbox.o:
	$(CXX) $(INCLUDES) -c ACTORMAILBOX.CPP
actorevent.o:
	$(CXX) $(INCLUDES) -c ACTOREVENT.CPP
bmp.o:
	$(CXX) $(INCLUDES) -c BMP.CPP
image.o:
	$(CXX) $(INCLUDES) -c IMAGE.CPP
main.o:
	$(CXX) $(INCLUDES) -c MAIN.CPP

clean:
	del *.o;
