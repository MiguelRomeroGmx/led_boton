
// Ejercicio led y boton


const int led = 13;
const int boton = 2;

int estado = 0;
int anterior = 0;
int encender = 0;

void setup(){
	pinMode(boton, INPUT);
	pinMode(led, OUTPUT);
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

