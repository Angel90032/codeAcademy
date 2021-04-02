output: main.o myfunc.o
	gcc main.o myfunc.o -o output

main.o: main.c
	gcc -c main.c

myfunc.o: myfunc.c myH.h
	gcc -c myfunc.c

clean:
	del *.o output.exe