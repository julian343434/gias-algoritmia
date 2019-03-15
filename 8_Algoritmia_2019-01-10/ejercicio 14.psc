Algoritmo sin_titulo
	//1.DESCRIPCION DEL PROLEMA
    //PROGRAMA QUE 
	//2.DECLARACION DE VARIABLES Y CONSTANTES
	definir w,i,n,cubo,num como entero;
	//3.IDENTIFICACION DE VARABLES Y CONSTANTES
    i<-1;
	n<-0;
	cubo<-0;
	num<-0;
	w<-0;
	//4.DECOLECCION DE DATOS
    escribir "digite la cantidad de numeros en el grupo ";
	leer n;
	escribir "digite el rago de los numeros de 0 a ??";
	leer w;
	//5.PROCESAMIENTO DE LA INFORMACION
	mientras i<=n hacer
		num<-azar(w)+1;
		cubo<-num^3;
		escribir "el cubo de el numero ",num," es ",cubo ;
		i<-i+1;
	Finmientra
	//6.VISUALIZACION DE LOS RESULTADOS
	
FinAlgoritmo
