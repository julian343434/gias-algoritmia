Algoritmo sin_titulo
	//1.DESCRIPCION DEL PROLEMA
    //PROGRAMA QUE CALCULA LOA CUENTA DE UN CLIENTE DE AMBURGESAS
	//2.DECLARACION DE VARIABLES Y CONSTANTES
	definir x,u,cun,z,v,i como entero;
	definir d como caracter;
	definir val como cadena;
	//3.IDENTIFICACION DE VARABLES Y CONSTANTES
	x<-0;
	d<-"";
	u<-0;
	cun<-0;
	z<-0;
	i<-0;
	val<-"";
	//4.DECOLECCION DE DATOS
	Escribir "digite la cantidad de las hamburgesas ",x;
	leer v;
	//5.PROCESAMIENTO DE LA INFORMACION
	Para i<-v hasta 1 con paso -1 hacer
		escribir "digite el  tipo de hamburgesa, ",sin saltar;
		Escribir "sencillas(S), dobles (D), triples(T) rescpetivamente";
		leer d;
		si d=="S" Entonces
			x<-1+x;
		SiNo
			si d=="D" Entonces
				u<-1+u;
			SiNo
				si d=="T" Entonces
					z<-z+1;
				FinSi
			FinSi
		FinSi
FinPara
cun<-(x*10000)+(u*15000)+(z*28000);
cun<-(cun*0.05)+cun;
escribir "�usted pagara con targeta de credito? , digite (SI/NO) respectivamente ";
Leer val;
si val=="SI" entonces
	cun<-(cun*0.05)+cun;
finsi
escribir "el valor de su factura es de ",cun;
	//6.VISUALIZACION DE LOS RESULTADOs
FinAlgoritmo
