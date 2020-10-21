EXECS = tester

OBJS = tester.o Shape.o Circle.o Rectangle.o Triangle.o

CC = g++
CCFLAGS = -std=c++17 -Wall -Wno-deprecated -Werror=return-type -g

all: $(EXECS)

tester: $(OBJS)
	$(CC) $(CCFLAGS) $^ -o $@

Rectangle.o: Rectangle.cpp Rectangle.h Shape.cpp Shape.h
	$(CC) $(CCFLAGS) -c $<

%.o: %.cpp *.h
	$(CC) $(CCFLAGS) -c $<

%.o: %.cpp 
	$(CC) $(CCFLAGS) -c $<

clean:
	/bin/rm -f a.out $(OBJS) $(EXECS)
























