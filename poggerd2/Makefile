CC=		gcc

CFLAGS=	-Wall -g -std=gnu99 -pthread

poggerd: main.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f poggerd
