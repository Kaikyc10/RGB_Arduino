# Projeto Arduino - Controle de LED RGB Por Serial
Controle de LED RGB pelo monitor serial.

## Autor
Kaiky Costa Tereza - 22565

## Descrição
Este projeto é um exemplo de como controlar um LED RGB (Red, Green, Blue) utilizando o monitor serial do Arduino. O usuário pode enviar uma mensagem serial para o Arduino com a cor desejada (por exemplo, "r255 g0 b0" para definir a cor vermelha) e o Arduino irá ajustar os valores PWM dos pinos de saída para corresponder à cor especificada.

## Componentes Necessários
- Arduino; 
- LED RGB;
- Resistores de 220 ohms (para limitar a corrente nos pinos do LED);
- Fios para conexões;
- Computador com software Arduino IDE instalado (Caso o contrário, pode simular o projeto na internet através do site Tinkercad);

## Montagem
Conecte os pinos do LED RGB aos pinos do Arduino de acordo com a configuração definida no código. Neste projeto, o LED RGB está conectado da seguinte maneira:

- Pino Vermelho (Red) do LED RGB ao pino digital 6 do Arduino.
- Pino Verde (Green) do LED RGB ao pino digital 3 do Arduino.
- Pino Azul (Blue) do LED RGB ao pino digital 5 do Arduino.

Conecte um resistor de 220 ohms a cada pino do LED RGB, conectando o outro terminal de cada resistor ao terra (GND) do Arduino.

Conecte o Arduino ao seu computador usando um cabo USB (Caso esteja utilizando o Tinkercad, esta etapa não é necessária).

## Carregando o Código no Software
- Abra o software Arduino IDE no seu computador;
- Cole o código fornecido acima na janela do Arduino IDE;
- Selecione o tipo de placa Arduino que você está usando no menu "Ferramentas";
- Selecione a porta serial correta no menu "Ferramentas";
- Carregue o código no Arduino clicando no botão "Carregar" (seta para a direita) na parte superior do ambiente de desenvolvimento.

## Carregando o Código no Tinkercad
Basta apenas clicar em “Iniciar Simulação”.

## Simulando o Projeto
Após carregar o código no Arduino, abra o Monitor Serial no Arduino IDE (Ctrl + Shift + M) para interagir com o projeto (no Tinkercad, a opção de abrir o monitor serial está ao lado do código).

Digite uma mensagem serial para definir a cor do LED RGB. Por exemplo, você pode digitar "r255 g0 b0" para definir a cor vermelha, "r0 g255 b0" para verde e assim por diante.

O Arduino interpretará a mensagem e ajustará os valores PWM dos pinos de saída para corresponder à cor especificada.

Observe o LED RGB para ver a mudança de cor de acordo com a mensagem serial enviada.

## Contribuições
Este é um projeto simples que pode ser aprimorado de várias maneiras, como a adição de uma interface gráfica ou a capacidade de definir transições suaves entre cores. Fique á vontade para contribuir e aprimorar este projeto.

# Considerações
Código completo no seguinte repositório: https://github.com/Kaikyc10/RGB_Arduino
Projeto disponível para teste no Tinkercad: https://www.tinkercad.com/things/j3KRstwj2Y6-22565-led-rgb-atividade
