# define vars
CC = gcc
CCFLAGS = -c 
# this target will compile all the file 
all: almost

almost: main.o adder.o multiplier.o extract.o divide.o 
		$(CC) -o realOut main.o adder.o multiplier.o divide.o extract.o 
main.o: main.c 
		$(CC) $(CCFLAGS) main.c
adder.o: adder.c 
		$(CC) $(CCFLAGS) adder.c
multiplier.o: multiplier.c 
		$(CC) $(CCFLAGS) multiplier.c
extract.o: extract.c 
		$(CC) $(CCFLAGS) extract.c
divide.o: divide.c 
		$(CC) $(CCFLAGS) divide.c

clean :
		rm -rf mainOutput main.o adder.o multiplier.o extract.o divide.o realOut
run :
		./realOut					
				