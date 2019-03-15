Algoritmo sin_titulo
	//1.DESCRIPCION DEL PROLEMA
    //PROGRAMA QUE 
	//2.DECLARACION DE VARIABLES Y CONSTANTES
	definir i,k,pro como entero;
	
	//3.IDENTIFICACION DE VARABLES Y CONSTANTES
    i<--5;
	k<-0;
	pro<-0;
	//4.DECOLECCION DE DATOS
    escribir "digite el numero al cual quiere sacarle la tabla";
	leer k;
	//5.PROCESAMIENTO DE LA INFORMACION
	para i<=5 hacer
		si i>0 entonces
			pro<-k*i;
			escribir k," X ",i," =",pro;
		FinSi
		i<-i+1;
	Finmientras
	//6.VISUALIZACION DE LOS RESULTADOS
	
FinAlgoritmo
