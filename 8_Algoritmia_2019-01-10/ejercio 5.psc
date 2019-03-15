Algoritmo sin_titulo
	
	//1.DESCRIPCION DEL PROLEMA
    //PROGRAMA QUE CALCULA EL VALOR AHORADO EN UN AÑO Y DIARIAMENTE
	//2.DECLARACION DE VARIABLES Y CONSTANTES
	Definir i,x,a,b,c,v como real;
	definir suma como real;
	//3.IDENTIFICACION DE VARABLES Y CONSTANTES
	a<-0;
	b<-0;
	c<-0;
	x<-0;
	suma<-0;
	i<-1;
	v<-1;
	//4.DECOLECCION DE DATOS
	escribir  "digite el numero de dias a calcular lo ahorrrado";
	leer x;
	c<-1+b;
	x<-365-x;
	//5.PROCESAMIENTO DE LA INFORMACIO
	mientras i<=365 hacer 
		    c<-c+b;
		    b<-c-b;
			suma<-b+suma;
			si x<i Entonces
				si v>=3 entonces 
					escribir "el dia #",v," ahorro ",b," pesos";
				SiNo
					escribir "el dia #",v," ahorro ",b," peso";
				FinSi
			FinSi
			v<-v+1;
			i<-i+1;
	Finmientras
	//6.VISUALIZACION DE LOS RESULTADOS
	escribir "el valor ahorrado en un año es de ",suma;
	
FinAlgoritmo
