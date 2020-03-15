/* exemploFade:
  Esse exemplo mostra como realizar uma transição de esvanencimento com o pino
  9, utilizando a função analogWrite().
  A função analogWrite() usa PWM, portanto, se você deseja alterar o pino,
  certifique-se de usar outro pino compatível com PWM. Na maioria dos Arduino, 
  os pinos PWM são identificados com um sinal "~", como ~ 3, ~ 5, ~ 6, ~ 9, ~ 10 e ~ 11.
  Este código de exemplo está no domínio público e foi traduzido e adaptado por Lauany Reis 
  disponível em: <https://www.tinkercad.com/things/ldw2BShp5ml>.
  Original disponível em: <http://www.arduino.cc/en/Tutorial/Fade>. */

int led = 9;           // O pino PWM ao qual o LED está conectado
int brilho = 0;    // O quão brilhante estará o LED
int tempoEsvanecer = 5;    // Quanto tempo para apagar o LED
// A rotina de configuração é executada uma vez quando você pressiona reset:
void setup() {
  // Declara o pino 9 para ser uma saída:
  pinMode(led, OUTPUT);
}
// A rotina do loop é executada repetidamente para sempre:
void loop() {
  // Define o brilho do pino 9:
  analogWrite(led, brilho);
  // Altera o brilho para a próxima vez no loop:
  brilho = brilho + tempoEsvanecer;
  // Inverte a direção do desbotamento nas extremidades:
  if (brilho <= 0 || brilho >= 255) {
    tempoEsvanecer = -tempoEsvanecer;
  }
  // Aguarda 30 milissegundos para ver o efeito de escurecimento
  delay(70);
}
