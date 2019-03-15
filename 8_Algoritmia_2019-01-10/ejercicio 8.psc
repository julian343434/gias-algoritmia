Algoritmo sin_titulo
	//1.DESCRIPCION DEL PROLEMA
    //PROGRAMA QUE CALCULA EL PROMEDIO DE EDAD DE UNA ESCUELA
	//2.DECLARACION DE VARIABLES Y CONSTANTES
	Definir i,j,edad,ns,estu como entero;
	definir suma,div,div2,cont como real;
	//3.IDENTIFICACION DE VARABLES Y CONSTANTES
    i<-1;
	j<-1;
	edad<-0;
	ns<-0;
	estu<-0;
	suma<-0;
	div<-0;
	div2<-0;
	cont<-0;
	//4.DECOLECCION DE DATOS
	escribir "digite la cantidad de salones en el establecimiento ";
	leer ns;
	//5.PROCESAMIENTO DE LA INFORMACION
    para i<=ns hacer 
		estu<-azar(10)+41;
		mientras j<=estu hacer 
			edad<-azar(6)+13;
			suma<-suma+edad;
			si j==1 entonces
				div<-suma/estu;
				escribir "el promedio de edad de el salon numero(#) es ",div;
			FinSi
			j<-1+i;
		Finmientras
		div2<-div+div2;
		si i==1 entonces
			cont<-div2/ns;
			escribir "el promedio de la escuela es ",cont;
		FinSi
		suma<-0;
		i<-1+i;
	Finmientras
	//6.VISUALIZACION DE LOS RESULTADOS
	
FinAlgoritmo
