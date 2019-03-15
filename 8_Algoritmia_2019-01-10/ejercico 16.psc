Algoritmo sin_titulo
	//1.DESCRIPCION DEL PROLEMA
    //PROGRAMA QUE 
	//2.DECLARACION DE VARIABLES Y CONSTANTES
	definir i,anos,val como entero;
	definir ganar,p como real; 
	//3.IDENTIFICACION DE VARABLES Y CONSTANTES
    p<-150000;
	i<-1;
	ganar<-0;
	val<-0;
	anos<-0;
	//4.DECOLECCION DE DATOS
    escribir "digite el año acutal";
	leer anos;
	anos<-anos-1961;
	//5.PROCESAMIENTO DE LA INFORMACION
	para i<=anos hasta 1 con paso -1 
		ganar<-p*(1+(15/100));
		p<-ganar;
		i<-i+1;
	Finmientras
	//6.VISUALIZACION DE LOS RESULTADOS
	escribir "su saldo es de ",p;
FinAlgoritmo
