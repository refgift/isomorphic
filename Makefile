.c.o:
	cc -c $< -O

iso:	isomorphic.o
	cc -o $@ $<

clean:
	rm *.o