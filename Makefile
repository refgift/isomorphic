.SUFFIXES: .c .o

.c.o:
	cc -c $< -O

isomorphic: isomorphic.o
	cc -o $@ isomorphic.o

clean:
	rm *.o
