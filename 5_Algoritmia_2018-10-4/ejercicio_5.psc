algoritmo ejercicio_5
//DESCRIPCION DEL PROBLEMA

//HALLAR EL AREA DE UN PENTAGONO REGULAR

//DEFINICION DE LAS VARIABLES
definir area,peri,x,apotema como reales;
//DECLARACION DE LAS VARIABLES
apotema<-0;
area<-0;
x<-0;
peri<-0;
//SOLICITUD DE LA INFORMACION
escribir "digite el valor de un lado del pentagono";
leer x;
escribir "digite el apotema de el pentagono";
leer apotema;
//PROCESAMIENTO DE LA INFORMACION
peri<-x*5;
area<-(apotema*peri)/2;
//RESULTADOS
escribir "el area de el pentagono es de ",area;
fin algoritmo
