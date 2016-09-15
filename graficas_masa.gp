#######graficamos los datos del punto 9##########

##graficamos pirmero v vs m## 


set terminal png
set output 'grafica1_datos_masa.png'
set pointsize 1.5
set xlabel 'm'
set ylabel 'v'
set title ' v vs m'

plot"salida_punto9_masa.dat" u 3:1  title ''

##graficamos luego v/c vs v## 


set terminal png
set output 'grafica2_datos_masa.png'
set pointsize 1.5
set xlabel 'v'
set ylabel 'v/c'
set title ' v/c vs v'

plot"salida_punto9_masa.dat" u 1:2  title ''