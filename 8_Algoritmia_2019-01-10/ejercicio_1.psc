algoritmo ejercicio_1
//DESCRIPCION DEL PROBLEMA
	//HALLAR EL SALARIO EN 6 AÃOS DE UN PROFESOR
//DEFINICION DE VARIABLES
definir i,j como entero
definir a,x,salario como real;
//DECLARACION DE VARIABLE
i<-1;
x<-1500000;
salario<-0;
a<-0;
j<-1;
//LECTURA DE DATOS 
//PROCESAMIENTO DE LA INFORMACION
mientras i<=6 hacer
	salario<-x*(1/10)+x;
	x<-salario;
	escribir "el salario en el aÃ±o ",j," es de ",salario;
	j<-j+1;
	a<-a+x;
	i<-i+1;
fin mientras
//RESULTADOS
escribir "el salario en los 6 aÃnos es de ",a;
Fin Algoritmo
