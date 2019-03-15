algoritmo ejercicio_1
//DESCRIPCION DEL PROBLEMA 
	//HALLAR EL SALARIO EN 6 AÑOS DE UN PROFESOR
//DEFINICION DE VARIABLES
definir i como entero;
definir x,salario como real;
//DECLARACION DE VARIABLE
i<-0;
x<-1500000;
salario<-0;
//LECTURA DE DATOS 
//PROCESAMIENTO DE LA INFORMACION
para i<-1 hasta i=6 hacer 
	salario<-x*(1/10);
	x<-salario;
	escribir "el salario en el año ",j," es de ",salario;
	j<-j+1;
	o<-o+x;
fin para
//RESULTADOS
escribir "el salario en los 6 años es de ",o;
fin algoritmo
