CXX=gpp.exe
CFLAGS=-O
INCLUDES= -IC:\DJGPP\ALLEGRO\INCLUDE
all: main.exe

main.exe: dbstring.o actor.o actormailbox.o actorevent.o bmp.o image.o main.o
	$(CXX) -o PLAY.EXE MAIN.O BMP.O ACTOR.O ACTORMAILBOX.O ACTOREVENT.O IMAGE.O -LC:\DJGPP\LIB -lstdcxx -LC:\DJGPP\ALLEGRO\LIB -lalleg


dbstring.o:
	$(CXX) $(INCLUDES) -c DBSTRING.CPP
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
	del PLAY.EXE
