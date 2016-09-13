CC=gcc
#opciones de ejecucion
CFLAGS=-c -O1
#librerias 
LDFLAGS=-lm
SOURCES=seno.c coseno.c division_entera.c factorial_de_x.c calculadora.c punto6.c punto7.c  
OBJECTS=$(SOURCES:%.c=%.o)


all1: factorial 

all2: seno coseno factorial_de_x division_entera calculadora punto6 punto7


#el $@ reemplaza el target que en este caso es hello
all1: 
	$(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o 
	
all2: 
	$(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@.x	

%.o: %.c
	$(CC) $(CFLAGS) $<

clean:
	rm -rf *.o *.x *~


