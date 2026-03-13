
all:libhello.so prog

hello.o:
	${CC} -fPIC -c hello.c 

hello1.o:
	${CC} -fPIC -c hello1.c 

libhello.so: hello.o hello1.o
	${CC} -shared -o libhello.so hello.o hello1.o

prog:
	${CC} main.c -L. -lhello -o prog

run:
	@export LD_LIBRARY_PATH=.:$$LD_LIBRARY_PATH

clean:
	rm -f libhello.so prog hello.o hello1.o
