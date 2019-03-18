Algoritmo sin_titulo
	definir j,i,x,suma,valo como real;
	x<-0;
	i<-1;
	suma<-0;
	valo<-0;
	j<-1;
	escribir "digite su cuota";
	leer x;
	escribir "el valor inicial de su  apuesta";
	leer valo;
	mientras i<=30 hacer 
		suma<-(x*valo);
		valo<-suma;
		i<-i+1;
		escribir "las ganancioas del dia ",j," es de ",suma;
		j<-j+1;
	FinMientras
FinAlgoritmo
