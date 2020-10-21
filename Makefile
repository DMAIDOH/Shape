EXECS = tester
<<<<<<< HEAD
OBJS = tester.o Shape.o Circle.o Rectangle.o Triangle.o
=======
OBJS = tester.o Shape.o
>>>>>>> e2079d3256ab805ada607dec4d3b81dfbe63d9cf

CC = g++
CCFLAGS = -std=c++17 -Wall -Wno-deprecated -Werror=return-type -g

all: $(EXECS)

tester: $(OBJS)
	$(CC) $(CCFLAGS) $^ -o $@

%.o: %.cpp *.h
	$(CC) $(CCFLAGS) -c $<

%.o: %.cpp 
	$(CC) $(CCFLAGS) -c $<

clean:
	/bin/rm -f a.out $(OBJS) $(EXECS)
























