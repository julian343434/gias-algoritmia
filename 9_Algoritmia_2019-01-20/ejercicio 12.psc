Algoritmo sin_titulo
	//1.DESCRIPCION DEL PROLEMA
    //PROGRAMA QUE 
	//2.DECLARACION DE VARIABLES Y CONSTANTES
	definir i,n,suma3,suma,suma2 como entero;
	definir nota como real;
	//3.IDENTIFICACION DE VARABLES Y CONSTANTES
    i<-1;
	n<-0;
	suma<-0;
	suma2<-0;
	nota<-0;
	suma3<-1;
	//4.DECOLECCION DE DATOS
    escribir "digite el numero de alumnos ";
	leer n;
	//5.PROCESAMIENTO DE LA INFORMACION
	repetir
		nota<-azar(51)*(0.1);
		si nota>=3.0 entonces
			suma<-suma+1;
		SiNo
			suma2<-suma2+1;
		FinSi
		escribir "la nota del alumno #",suma3," es de ",nota;
		suma3<-suma3+1;
		i<-i+1;
	hasta que i>n
	//6.VISUALIZACION DE LOS RESULTADOS
	escribir "el numero da aprobados fueron ",suma;
	escribir "el numero de reprobados fueron ",suma2;
FinAlgoritmo
