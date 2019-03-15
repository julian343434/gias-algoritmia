algoritmo ejercicio_1
//DESCRIPCION DEL PROBLEMA 
	//HALLAR EL SALARIO EN 6 AÑOS DE UN PROFESOR
//DEFINICION DE VARIABLES
definir i,j como entero;
definir a,x,salario como real;
//DECLARACION DE VARIABLE
i<-0;
x<-1500000;
salario<-0;
a<-0;
j<-1;
//LECTURA DE DATOS 
//PROCESAMIENTO DE LA INFORMACION
para i<-1 hasta 6 Con Paso 1 hacer
	salario<-x*(1/10)+x;
	x<-salario;
	escribir "el salario en el año ",j," es de ",salario;
	j<-j+1;
	a<-a+x;
fin para
//RESULTADOS
escribir "el salario en los 6 a�nos es de ",a;
Fin Algoritmo
