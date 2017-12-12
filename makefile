CC = g++ -O4

.c: $@.h
	$(CC)  $@.c $(LDLIBS) -o $@

.cc: $@.h
	$(CC)  $@.cc $(LDLIBS) -o $@

all: count

prog.o: prog.cc
	$(CC)  prog.cc -c $(INCS)


count: prog.o
	$(CC)  prog.o $(INCS) $(LDLIBS) -o count
