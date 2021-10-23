
CC = gcc 
CCFLAG = -c 

all : main.o function1.o
		$(CC) -o output main.o function1.o

main.o : main.c 
		$(CC) $(CCFLAG) main.c 	
function1.o : function1.c 
				$(CC) $(CCFLAG) function1.c 
clean : 
		rm -rf main.o output
