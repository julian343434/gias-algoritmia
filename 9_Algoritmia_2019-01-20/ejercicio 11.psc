Algoritmo sin_titulo
	//1.DESCRIPCION DEL PROLEMA
    //
	//2.DECLARACION DE VARIABLES Y CONSTANTES
	definir n,i,x,suma,suma2,suma3,total como entero;
	//3.IDENTIFICACION DE VARABLES Y CONSTANTES
    i<-1;
	x<-0;
	n<-0;
	suma<-0;
	suma2<-0;
	suma3<-1;
	total<-0;
	//4.DECOLECCION DE DATOS
	escribir "digite el numero de ventas relizadas ";
	leer n;
	//5.PROCESAMIENTO DE LA INFORMACION
	repetir
		x<-azar(2000000);
		si x<=1000000 entonces
			suma<-suma+1;
		SiNo
			si (x>1000000) & (x<2000000) Entonces
				suma2<-suma2+1;
			FinSi
		FinSi
		escribir "el monto de la venta #",suma3," es ",x;
		total<-x+total;
		suma3<-suma3+1;
		i<-i+1;
	hasta que i>n
	//6.VISUALIZACION DE LOS RESULTADOS
	Escribir "la cantidad de ventas menores e iguales a un millon  fueron ",suma;
	Escribir "la cantidad de ventas mayor a un millon pero menor a dos millones fueron ",suma2;
	Escribir "el monto total de las ventas fue ",total;
FinAlgoritmo
