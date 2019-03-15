Algoritmo sin_titulo
	//1.DESCRIPCION DEL PROLEMA
    //PROGRAMA QUE CALCULA EL TOTAL DE UNA ALCANCIA 
	//2.DECLARACION DE VARIABLES Y CONSTANTES
	Definir i,suma,suma_monedas,pro,cont como entero ;
	//3.IDENTIFICACION DE VARABLES Y CONSTANTES
	i<-1;
	suma<-0;
	suma_monedas<-0;
	pro<-0;
	cont<-50;
	//4.DECOLECCION DE DATOS
	//5.PROCESAMIENTO DE LA INFORMACION
    Para i<=12 Hacer
		si (i=3)| (i=7)| (i=10)  entonces 
			si i>5 Entonces
				escribir "digite la cantidad de billetes de ",cont;
				leer suma;
				pro<-suma*cont;
				suma_monedas<-pro+suma_monedas;
				escribir "la cantidad de billetes es  de ",cont," es de ",suma," y en total hay ",pro;
				cont<-cont*2+(cont/2);
			SiNo
				escribir "digite la cantidad de modnedas de ",cont;
				leer suma;
				pro<-suma*cont;
				suma_monedas<-pro+suma_monedas;
				escribir "la cantidad de monedas de ",cont," es de ",suma,"y en total hay ",pro;
				cont<-cont*2+(cont/2);
			finsi 
		SiNo
			si i>5 Entonces
				escribir "digite la cantidad de billetes de ",cont;
				leer suma;
				pro<-suma*cont;
				suma_monedas<-pro+suma_monedas;
				escribir "la cantidad de billetes es  de ",cont," es de ",suma," y en total hay ",pro;
				cont<-cont*2;
			SiNo
				escribir "digite la cantidad de modnedas de ",cont;
				leer suma;
				pro<-suma*cont;
				suma_monedas<-pro+suma_monedas;
				escribir "la cantidad de monedas de ",cont," es de ",suma,"y en total hay ",pro;
				cont<-cont*2;
			finsi 
		FinSi
		si i=5 Entonces
			cont<-cont-1000;
		FinSi
		i<-i+1;
	Finmientras
	//6.VISUALIZACION DE LOS RESULTADOS
	escribir "el valor de la alcancia es de ",suma_monedas;
FinAlgoritmo
