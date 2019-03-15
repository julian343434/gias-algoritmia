Algoritmo sin_titulo
	//1.DESCRIPCION DEL PROLEMA
	//2.DECLARACION DE VARIABLES Y CONSTANTES
	definir b,i,j como entero;
	definir sum,div,s,c,x como real;
	//3.IDENTIFICACION DE VARABLES Y CONSTANTES
	x<-1;
	b<-1;
	j<-1;
	c<-0;
	s<-0;
	i<-1;
	sum<-0;
	div<-0;
	
	//4.DECOLECCION DE DATOS
	escribir "digite el angulo";
	leer s;
	//5.PROCESAMIENTO DE LA INFORMACION
	repetir
		repetir 
			x<-x*(b);
		    b<-1+b;
		    j<-j+1;
		hasta que j>i 

		c<-(s)^(i);
		div<-c/x;
		si i==3 entonces 
			sum<-sum-div;
			escribir sum;
		SiNo
			sum<-sum+div;
		FinSi
		x<-1;
		b<-1;
		i<-i+1;
	hasta que i>7
	//6.VISUALIZACION DE LOS RESULTADOS
	escribir "el seno de ",s," es de ",sum; 
FinAlgoritmo
