OBJETS = complexe.o useComplexe.o

CC = gcc

CFLAGS = -Wall

useComplexe : $(OBJETS) 
	$(CC) $(CFLAGS) $(OBJETS) -o useComplexe -lm
	
useComplexe.o: useComplexe.c complexe.h
	$(CC) $(CFLAGS) -c useComplexe.c

complexe.o: complexe.c complexe.h
	$(CC) $(CFLAGS) -c complexe.c

