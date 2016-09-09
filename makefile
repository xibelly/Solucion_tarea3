CC = gcc

CFLAGS = -c -O0 -I/home/$(USER)/local/include/ -I/usr/include/

CFLAGSDEBUG = -g -Wall -c -I/home/$(USER)/local/include/ -I/usr/include/

LFLAGS = -lm -L/home/$(USER)/local/lib -Wl,-R /home/$(USER)/local/lib 

OBJECTS = $(patsubst %.c, %.o, $(wildcard include/*.c))

%.out: %.o $(OBJECTS)
	$(CC) $^ $(LFLAGS) -o $@

seno:
	echo Estoy compilando $@.c
	$(CC) $(CFLAGS) $@.c -o $@.o
	$(CC) $@.o $(LFLAGS) -lgsl -lgslcblas -lfftw3 -lm -o  $@.x		

debug: 
	echo Estoy compilando para debugear $@.c
	$(CC) $(CFLAGSDEBUG) $@.c -o $@.o
	$(CC) $@.o $(LFLAGS) -lgsl -lgslcblas -lfftw3 -o $@.x


clean:
	rm -rf *.~
	rm -rf *.out
	rm -rf *#
	rm -rf *.o
	rm -rf *.a
	rm -rf *.so
	rm *.x
