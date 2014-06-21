./bin/main:./tmp/main.o ./tmp/fun.o
	gcc -o ./bin/main ./tmp/main.o ./tmp/fun.o -I./include
./tmp/main.o:./src/main.c 
	gcc -c ./src/main.c -o ./tmp/main.o -I./include
./tmp/fun.o:./src/fun.c
	gcc -c ./src/fun.c  -o ./tmp/fun.o  -I./include

