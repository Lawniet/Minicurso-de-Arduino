/* Controle das das posições de um servo motor utilizando um potenciômetro  (resistor variável).
Autor: Michal Rinott, disponível em: <http://people.interaction-ivrea.it/m.rinott>; 
modificado em 8 Nov 2013 por Scott Fitzgerald disponível em: <http://www.arduino.cc/en/Tutorial/Knob>
e traduzido e adaptado por Lauany Reis disponível em: < https://www.tinkercad.com/things/cB1MYR6AqnR>. */ 

#include <Servo.h> 

Servo servo_util; // Cria um objeto de interação  
int potpin = 0; // Pino analógico utilizado para o potenciômetro 
int val; // Variável para ler os valores do pino analógico

void setup() 
{ 
	servo_util.attach(9); // Atribui o servo ao pino 9
} 

void loop() 
{ 
	val = analogRead(potpin); // Le os valores do potenciômetro  (valores entre 0 0 1023) 
	val = map(val, 0, 1023, 0, 180); // Converte os valores para usá-los no servo (valores entre 0 e 180) 
	servo_util.write(val); // Define a posição do servo de acordo com o valor convertido
	delay(15); // Aguarda o servo chegar na posição
}
