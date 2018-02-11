
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

estado = digitalRead(boton);
	if ((estado == HIGH) && (anterior == LOW)){
		encender = 1 - encender;
		delay(150);
	}
	anterior = estado;
	if(encender == 1){
	    alarma = 1;
	    digitalWrite(led, HIGH);
	    delay(200);
	}
	else{
		alarma = 0;
		digitalWrite(led, LOW);
		delay(200);
	}
}

