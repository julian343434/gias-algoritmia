Algoritmo sin_titulo
	//1.DESCRIPCION DEL PROLEMA
    //PROGRAMA QUE 
	//2.DECLARACION DE VARIABLES Y CONSTANTES
	definir i,n,s como entero;
	definir val,sal,horas como real;
	definir nombre como cadena ;
	//3.IDENTIFICACION DE VARABLES Y CONSTANTES
	sal<-0;
	horas<-0;
	i<-0;
	nombre<-"";
	n<-0;
	s<-1;
	//4.DECOLECCION DE DATOS
    escribir "digite el numero de trabajadores";
	leer n;
	//5.PROCESAMIENTO DE LA INFORMACION
	para i<-n hasta 1 con paso -1
		horas<-azar(10)+41;
		val<-azar(3000)+7001;
		sal<-val*horas;
		escribir "digite el nombre de el trabajador #",s;
		leer nombre;
		si (sal>=0) & (sal<=1500000) entonces
			sal<-(val*horas*(5/100))+sal;
		SiNo
			si (sal>1500000) & (sal<=3000000) entonces
				sal<-(val*horas*(7/100))+sal;
			sino 
			    si (sal>3000000) & (sal<=4500000) entonces
					sal<-(val*horas*(9/100))+sal;
					
				FinSi
			FinSi
		FinSi
		escribir "el salario de el trabajador #",s," llamado ",nombre;
		escribir "es de ",sal;
	s<-s+1;
	FinPara
	//6.VISUALIZACION DE LOS RESULTADOS
FinAlgoritmo
