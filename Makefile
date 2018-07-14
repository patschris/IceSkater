CC		= g++
CFLAGS	= -g -Wall
EXEC 	= IceSkater
OBJS 	= Background.o House.o IceSkater.o Lake.o main.o Mountains.o Scene.o Trees.o
SRCS 	= Background.cpp House.cpp IceSkater.cpp Lake.cpp main.cpp Mountains.cpp Scene.cpp Trees.cpp
HEADERS	= Background.hpp House.hpp IceSkater.hpp Lake.hpp Mountains.hpp Scene.hpp Trees.hpp

.PHONY : all

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

Background.o: Background.cpp
	$(CC) $(CFLAGS) -c Background.cpp

House.o: House.cpp
	$(CC) $(CFLAGS) -c House.cpp

IceSkater.o: IceSkater.cpp
	$(CC) $(CFLAGS) -c IceSkater.cpp

Lake.o: Lake.cpp
	$(CC) $(CFLAGS) -c Lake.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

Mountains.o: Mountains.cpp
	$(CC) $(CFLAGS) -c Mountains.cpp

Scene.o: Scene.cpp
	$(CC) $(CFLAGS) -c Scene.cpp

Trees.o: Trees.cpp
	$(CC) $(CFLAGS) -c Trees.cpp


.PHONY: clean

clean:
	rm -f $(OBJS) $(EXEC)