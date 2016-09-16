#######graficamos los datos del punto 11##########

##graficamos pirmero v vs m## 

plot"iteraciones_modo1.dat" w lp lc rgb "red" title 'Sin OPT'

set terminal png
set output 'grafica_optimizacion.png'
set pointsize 1.5
set xlabel 'Iteraciones'
set ylabel 'Timepo Ejecucion'
set title ' Tiempo Ejecucion vs Iteraciones'

replot"iteraciones_modo2.dat" w lp lc rgb "blue"  title 'Con OPT'

