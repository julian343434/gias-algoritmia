Algoritmo sin_titulo
	//1.DESCRIPCION DEL PROLEMA
    //PROGRAMA QUE 
	//2.DECLARACION DE VARIABLES Y CONSTANTES
	definir i,j,n,x,v como entera;
	definir mul,suma,div,k,r como real;
	//3.IDENTIFICACION DE VARABLES Y CONSTANTES
    i<-0;
	j<-0;
	suma<-0;
	div<-0;
	v<-1;
	k<-1;
	r<-0;
	mul<-1;
	//4.DECOLECCION DE DATOS
	escribir "digite del uno en adelante el numero de exactitud";
	leer n;
	escribir "digite el valor de la x";
	leer x;
	//5.PROCESAMIENTO DE LA INFORMACION
	para i<-n hasta 1 con paso -1 
		para j<-v hasta 1 con paso -1
			r<-r+1;
			k<-k*r;
			mul<-mul*x;
			div<-mul/k;
		FinPara
		v<-v+1;
		mul<-1;
		k<-1;
		r<-0;
		suma<-suma+div;
	FinPara
	//6.VISUALIZACION DE LOS RESULTADOS
	escribir "el valor en y de la funcion es de ",suma;
FinAlgoritmo
