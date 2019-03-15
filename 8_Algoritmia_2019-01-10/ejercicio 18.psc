Algoritmo sin_titulo
	//1.DESCRIPCION DEL PROLEMA
	//2.DECLARACION DE VARIABLES Y CONSTANTES
	definir b,i,j como entero;
	definir sum,div,s,c,x como real;
	//3.IDENTIFICACION DE VARABLES Y CONSTANTES
	x<-1;
	b<-1;
	j<-0;
	c<-0;
	s<-0;
	i<-0;
	sum<-0;
	div<-0;
	
	//4.DECOLECCION DE DATOS
	escribir "digite el angulo";
	leer s;
	//5.PROCESAMIENTO DE LA INFORMACION
	para i<-1 hasta 7 con paso 2 hacer 
		para j<-1 hasta i con paso 1 hacer 
			x<-x*(b);
		    b<-1+b;
		fin para 

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
	FinPara
	//6.VISUALIZACION DE LOS RESULTADOS
	escribir "el seno de ",s," es de ",sum; 
FinAlgoritmo
