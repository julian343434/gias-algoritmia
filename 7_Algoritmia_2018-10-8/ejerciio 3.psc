Algoritmo sin_titulo
	//1.DESCRIPCION DEL PROLEMA
    //PROGRAMA QUE CALCULA SI UN NUMERO ES MAYOR O MENOR A CERO
	//2.DECLARACION DE VARIABLES Y CONSTANTES
	Definir a,i,x,x1,x2,x3,x4 como entero;
	//3.IDENTIFICACION DE VARABLES Y CONSTANTES
	i<-0; 
	a<-0;
	x<-0;
	x1<-0;
	x2<-0;
	x3<-0;
	x4<-1;
	//4.DECOLECCION DE DATOS
	
	escribir "digite la cantidad de numeros que quiere clasificar ";
	leer x;
	//5.PROCESAMIENTO DE LA INFORMACION
	para i<-x hasta 1 con paso -1
		escribir "digite el #",x4," numero";
	leer a;
	si a==0 Entonces
		x1<-1+x1;
	SiNo
		si a<0
			x2<-1+x2;
		SiNo
			si a>0 Entonces
				x3<-1+x3;
			FinSi
		FinSi
	FinSi
	x4<-x4+1;
FinPara

	//6.VISUALIZACION DE LOS RESULTADOS
    escribir "la cantidad de numeros que son menora a cero son ",x2;
	escribir "los cantidad de numeros que son cero son ",x1;
	escribir "la cantidad de numeros que son mayores a cero son ",x3;
FinAlgoritmo
