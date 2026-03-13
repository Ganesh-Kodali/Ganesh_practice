CC=gcc

CFLAGS= -Wall 

all: hello hello1 add

hello:
	${CC} ${CFLAGS} -c  hello.c -o hello.o

hello1:
	${CC} ${CFLAGS} hello1.c -o hello1

add:
	${CC} ${CFLAGS} add.c -o add

clean:
	rm hello.o hello1 add 
