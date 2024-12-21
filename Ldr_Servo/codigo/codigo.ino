#include <Servo.h> // Biblioteca para controlar servo motores

// Define os pinos e constantes
#define LDR A0           // Define o pino analógico onde o sensor LDR está conectado
const int MOTOR = 4;     // Define o pino digital para o controle do servo motor
#define LED 2            // Define o pino digital para o LED 1
#define LED1 3           // Define o pino digital para o LED 2

int limitedisparo = 5;  // Define o limite mínimo para ativação baseado na leitura do LDR
int valor = 0;          // Variável para armazenar a leitura atual do LDR
Servo s;                // Cria um objeto da classe Servo para controlar o servo motor
int pos = 0;            // Variável para armazenar a posição atual do servo motor

void setup() {
  Serial.begin(9600);     // Inicializa a comunicação serial com baud rate de 9600
  s.attach(MOTOR);        // Associa o servo motor ao pino especificado
  s.write(0);             // Garante que o servo inicie na posição de 0 graus
  pinMode(LDR, INPUT);    // Configura o pino do LDR como entrada
  pinMode(LED, OUTPUT);   // Configura o pino do LED 1 como saída
  pinMode(LED1, OUTPUT);  // Configura o pino do LED 2 como saída
}

void loop() {
  valor = analogRead(LDR); // Lê o valor analógico do sensor LDR e armazena na variável

  // Se a leitura do LDR for maior que o limite estabelecido
  if (valor > limitedisparo) { 
    digitalWrite(LED1, HIGH);  // Acende o LED 2
    if (pos != 70) {           // Verifica se a posição atual do servo é diferente de 70 graus
      pos = 70;                // Define a posição para 70 graus
      s.write(pos);            // Move o servo para a posição de 70 graus
    }
  } else {
    digitalWrite(LED1, LOW);   // Apaga o LED 2
  }

  // Se a leitura do LDR for menor que o limite estabelecido
  if (valor < limitedisparo) { 
    digitalWrite(LED, HIGH);   // Acende o LED 1
    if (pos != 95) {           // Verifica se a posição atual do servo é diferente de 95 graus
      pos = 95;                // Define a posição para 95 graus
      s.write(pos);            // Move o servo para a posição de 95 graus
    }
  } else {
    digitalWrite(LED, LOW);    // Apaga o LED 1
  }

  // Exibe no monitor serial a leitura atual do LDR
  Serial.print("Leitura atual do sensor: ");
  Serial.println(valor);

  delay(50); // Adiciona um pequeno atraso para estabilizar as leituras
}
