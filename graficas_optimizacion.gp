#######graficamos los datos del punto 11##########

set terminal png
set output 'grafica1_sin_opt.png'
set pointsize 1.5
set xlabel 'Iteraciones'
set ylabel 'Tiempo CPU'
set title ' Tiempo CPU vs Iteraciones'

plot"iteraciones_modo1.dat" w lp lc "blue" title 'Sin OPT'

#######graficamos los datos del punto 11##########

set terminal png
set output 'grafica2_con_opt.png'
set pointsize 1.5
set xlabel 'Iteraciones'
set ylabel 'Tiempo CPU'
set title ' Tiempo CPU vs Iteraciones'

plot"iteraciones_modo2.dat" w lp lc "red" title 'Con OPT'
