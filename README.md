# Criação do circuito no arduino
<h3>Componentes necessários</h3>
Arduino Uno ou qualquer outro microcontrolador<br>1 Breadboard<br>Jumpers/Cabos para conexão<br>1 Ldr<br>3 Resistors de 220 ohms<br>1 Micro Servo 9g SG90<br>2 Leds
<br>Link para IDE: https://docs.arduino.cc/software/ide-v1

![Meu Projeto](circuito_arduino.png)

![Meu Projeto](Imagem_demonstrativa.jpg)

https://github.com/user-attachments/assets/c616e577-6f34-49a3-ac12-ded9a2c208d4

Obs: O código deve ser ajustado com base nas leituras do sensor LDR exibidas no monitor. Para calibrar o limite de acionamento do motor, analise os valores recebidos e configure um limite que corresponda ao nível desejado de disparo. Isso garantirá que o motor seja acionado apenas quando os valores do sensor atingirem ou excederem o limite estabelecido.

O posicionamento do sensor no monitor deve levar em consideração vários fatores, como a velocidade do personagem e a velocidade de resposta do Arduino. É importante realizar testes para determinar o melhor ponto de calibração, ajustando o limite de disparo conforme necessário. A estrutura do código pode ser mantida, mas ajustes finos na lógica de acionamento são essenciais para otimizar a resposta do sistema e garantir um controle eficiente. 
