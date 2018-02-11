
// Ejercicio led y boton


const int led = 13;  	// Constante led para referirnos al pin 13
const int boton = 2;	// Constante botón para referirnos al pin 2

int estado = 0;   // Declaración de variables de tipo entero
int anterior = 0;
int encender = 0;

void setup(){
	pinMode(boton, INPUT);	// Definimos boton (pin 2) como entrada
	pinMode(led, OUTPUT);	// Definimos led (pin 13) como salida
}

void loop() {

estado = digitalRead(boton);	// Leer el valor de la entrada botón (pin 2 ) y guardar el dato en la variable estado
	if ((estado == HIGH) && (anterior == LOW)){ //Si estado es igual a Alto (boton presionado) y la variable anterior igual a Bajo pasa a la sig linea
		encender = 1 - encender;	//le asiga a la variable encender el valor 1 - lo que valga encender (iniciando el programa vale cero)
		delay(150);		// pausa de 150 ms
	}
	anterior = estado;  // Asignamos a la variable anterior el valor de estado
	if(encender == 1){ // si encender es igual a 1 se ejecuta lo que esta en las llaves
	    digitalWrite(led, HIGH); //La salida led se coloca en alto
	    delay(200); // pausa de 200ms
	}
	else{ // en caso de que encender no sea igua a 1 se ejecuta lo que este en las llaves
		digitalWrite(led, LOW); // La salida led se coloca en estado bajo
		delay(200); // pausa de 200ms
	}
}

