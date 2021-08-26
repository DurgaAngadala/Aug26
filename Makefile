CC= gcc
CFLAGS= -c -Wall -Werror
arith: main.o add.o sub.o
	      $(CC) $^ -o $@

main.o: main.c
	      $(CC) $(CFLAGS) $<

add.o: add.c
	      $(CC) $(CFLAGS) $<

sub.o:	sub.c
	      $(CC) $(CFLAGS) $<

clean:
	      rm -f *.o
	      rm -f arith
