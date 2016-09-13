
CC=gcc
#opciones de ejecucion
CFLAGS=-c -Wall
#librerias 
LDFLAGS=-lm
SOURCES=factorial.c seno.c coseno.c division_entera.c factorial_de_x.c calculadora.c punto6.c punto7.c  
OBJECTS=$(SOURCES:%.c=%.o)

all: seno coseno factorial factorial_de_x division_entera calculadora punto6 punto7

#el $@ reemplaza el target que en este caso es hello
all: 
	$(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@.x

%.o: %.c
	$(CC) $(CFLAGS) $<

clean:
	rm *.o *.x *~


