#include <Servo.h>
#include <NewPing.h>
#include <HX711.h>

const int ledNivelCriticoPorta = 6;
const int ledNivelAtencaoPorta = 4;
const int servoEletroImaPorta = 11;
const int servoSonarPorta = (12, 13);
const int balancaPorta = (A1, A0);

#define TRIGGER_PIN 12
#define ECHO_PIN 13
#define MAX_DISTANCE 400

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

unsigned int pingSpeed = 50;
unsigned long pingTimer;

// No Tikercad não temos o eletro imã, então estamos utilizando o "micro servo" para representar o imã.
Servo servoEletroIma;
HX711 scale;
    

void setup()
{
  // Configura porta especifica como output/input
  pinMode(ledNivelCriticoPorta, OUTPUT);
  pinMode(ledNivelAtencaoPorta, OUTPUT);
  pinMode(servoEletroImaPorta, INPUT);
  

  // Abre a porta serial e configura a frequencia
  Serial.begin(9600);
  // Configura estado inicial dos eltro imã como desligados
  servoEletroIma.attach(servoEletroImaPorta, 500, 2500);
  servoEletroIma.write(0);
  scale.begin(A1, A0);

  scale.set_scale(420); 
  scale.tare(257);

}

void loop()
{ 
  
  delay(50);

  
  Serial.print(sonar.ping_cm());
  Serial.println("cm");  
  // Desliga todos os leds
  digitalWrite(ledNivelCriticoPorta, LOW);
  digitalWrite(ledNivelAtencaoPorta, LOW);

  float peso = scale.get_units();
  Serial.println(peso);

 
  // De acordo com a capacidade restante
  	// Liga/Desliga os leds
  	// Liga/Desliga o eletro imã para travar a porta
  if ((sonar.ping_cm() <= 10) || (peso >= 30)) // Nivel critico
  {
    // Liga o imã para travar a porta
    servoEletroIma.write(90);
    
    // Liga o led vermelho para indicar que o lixo está cheio
    digitalWrite(ledNivelCriticoPorta, HIGH);
    
    // Mostra no console uma mensagem clara do status atual
    Serial.print("[Critico] Lixo cheio! ");
  }
  // Warning
  else if(sonar.ping_cm() <= 30)
  {
    // Desliga o imã para destravar a porta
    servoEletroIma.write(0);
    
    // Liga o led amarelo para indicar que o lixo está quase cheio
    digitalWrite(ledNivelAtencaoPorta, HIGH);
    
    // Mostra no console uma mensagem clara do status atual
    Serial.print("[Atencao] Lixo quase cheio!");
  }
  else {
    // Desliga o imã para destravar a porta
    servoEletroIma.write(0);
    
    // Mostra no console uma mensagem clara do status atual
    Serial.print("[Informacao] Lixo OK!");
  }
}
