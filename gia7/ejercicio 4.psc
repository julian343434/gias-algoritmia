Algoritmo sin_titulo
	//1.DESCRIPCION DEL PROLEMA
    //PROGRAMA QUE 
	//2.DECLARACION DE VARIABLES Y CONSTANTES
	definir x,x1,x2,x3,v,i como entero;
	//3.IDENTIFICACION DE VARABLES Y CONSTANTES
	x<-0;
	i<-0;
	x1<-0;
	x2<-0;
	x3<-0;
	v<-0;
	//4.DECOLECCION DE DATOS
	escribir "digite la cantidad focos en el lote";
	leer x;
	//5.PROCESAMIENTO DE LA INFORMACION
	para i<-x hasta 1 con paso -1 hacer
		v<-azar(30)+1;
		si (v>=1) & (v<=10)  entonces
			x1<-x1+1;
		SiNo
			si (v>=11) & (v<=20)  entonces
				x2<-x2+1;
			SiNo
				si (v>=21) & (v<=30)  entonces
					x3<-x3+1;
				FinSi
			FinSi
		FinSi
	FinPara
	//6.VISUALIZACION DE LOS RESULTADOS
	escribir "la cantidad de focos verdes son ",x1;
	escribir "la cantidad de focos blancos son ",x2;
	Escribir "la cantidad de focos rojos son ",x3;
FinAlgoritmo
