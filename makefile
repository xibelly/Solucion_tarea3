
#comentarios
CC=gcc
#opciones de ejecucion
CFLAGS=-c -Wall
#para que linkee las librerias (en algunas es necesario en otras no)
LDFLAGS=-lm
SOURCES=factorial.c hello.c main.c 
OBJECTS=$(SOURCES:%.c=%.o)

all: hello

#el $@ reemplaza el target que en este caso es hello
hello: $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@.x

#este % coge las dependencias de hello que debe buscar con .o y las remmplaza por el string, entonces tomaria factorial luego main luego hello y coge el % lo remplaza por la primera que lee (factorial), luego la segunda (main), etc. $< le dice que lo debe remmplzar el % por la palabra. 

%.o: %.c
	$(CC) $(CFLAGS) $<

clean:
	rm *.o *.x *~


echo:
	echo "Hello"
