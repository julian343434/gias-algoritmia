Algoritmo ejercicio_6
//DESCRIPCION DEL PROBLEMA 
//PROGRAMA PARA SABER CUANTO PAGARA UNA PERSONA QUE QUIERA N ARTICULOS
//DEFINICION DE VARIABLES
definir suma,x,f,resul como real;
definir i como entero;
//DECLARACION DE VARIABLES
i<-0;
suma<-0;
x<-0;
f<-0;
//LECTURA DE DATOS
escribir "digite el numero de articulos ha llevar";
leer i;
//PROCESAMIENTO DE LA INFORMACION
para i hasta 0 con paso -1 hacer
	escribir "digite el valor de el articulo";
	leer x;
	si x>=200000 entonces
		f<-15;
		suma<-x*(1/f)+x;
		escribir "el valor de el articulo es de ",suma," y su descuento es de ",f;
	sino
		si x>100000 entonces
			 f<-12;
                suma<-x*(1/f)+x;
                escribir "el valor de el articulo es de ",suma," y su descuento es de ",f;
		sino
		 f<-10;
                suma<-x*(1/f)+x;
                escribir "el valor de el articulo es de ",suma," y su descuento es de ",f;

		fin si
	fin si 
	resul<-suma+resul;
fin para
//RESULTADOS
escribir "el total es de ",resul;
Fin Algoritmo
