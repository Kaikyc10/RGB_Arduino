// Define os pinos que estão conectados aos LEDs RGB
#define red    6
#define blue   5
#define green  3

int leds[] = {red, blue, green};
int tam = sizeof(leds)/sizeof(leds[0]);
int analogPin = A0;
int val = 0;

void setup() {
  // Inicializa a porta serial com uma taxa de 9600 bps
  Serial.begin(9600);

  // Configura os pinos como saídas
 for(int i = 0; i<tam; i++){
   
  pinMode(leds[i], OUTPUT);
  }

  // Exibe a mensagem "Digite sua cor RGB: " apenas uma vez
  Serial.println("\nDigite sua cor RGB: ");
}

void loop() {
  // Verifica se há dados disponíveis na porta serial
  if (Serial.available() > 0) {
    // Lê a entrada serial até o final da linha
    String input = Serial.readStringUntil('\n');

    // Remove os espaços em branco do início e do final da string
    input.trim();

    // Converte a string para letras minúsculas
    input.toLowerCase();

    // Extrai as cores e os valores PWM da string de entrada
    int r = 0, g = 0, b = 0;
    char color = ' ';
    int value = 0;
    Serial.println("\nCor recebida: ");
    for (int i = 0; i < input.length(); i++) {
      char c = input.charAt(i);
      if (c >= 'a' && c <= 'z') {
        color = c;
        value = 0;
      } else if (c >= '0' && c <= '9') {
        value = value * 10 + (c - '0');
        if (i == input.length() - 1 || input.charAt(i + 1) == ' ') {
          if (color == 'r') {
            r = value;
          } else if (color == 'g') {
            g = value;
          } else if (color == 'b') {
            b = value;
          }
          Serial.print(color);
          Serial.print(value);
          Serial.print(" ");
        }
      }
    }

    // Define os valores PWM dos LEDs RGB
    analogWrite(red, r);
    analogWrite(green, g);
    analogWrite(blue, b);
  }
}
