#######graficamos los datos del punto 6##########

plot"salida.dat" u 2:3 title 'salida.dat'

set terminal png
set output 'Comparacion_datos_escribe_lee.png'
set pointsize 1.5
set xlabel 'x'
set ylabel 'f(x)'
set title ' f(x) vs x'

replot"salida2.dat" u 1:2  title 'salida2.dat'