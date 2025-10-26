Algoritmo ejemplo
	//Datos de entrada
	Definir hora Como Real
	Definir precioHora Como Real
	Definir cobro Como Real
	Definir horasTotales Como Entero
	Definir minutos Como Real
	
	Escribir "INGRESE EL PRECIO QUE SE COBRA POR HORA"
	Leer precioHora
	Escribir "INGRESE EL TIEMPO QUE SE VA A UTILIZAR EN MINUTOS"
	Leer minutos
	
	//Proceso 
	hora=minutos/60
	horasTotales=trunc(hora)
	Si hora>horasTotales Entonces
		horasTotales=horasTotales+1
		fin si
	cobro=horasTotales*precioHora
	
	//Datos de salida
	Escribir "El cobro total es: ",cobro
	
FinAlgoritmo



