# Criação do circuito no arduino
<h3>Componentes necessários</h3>
Arduino Uno ou qualquer outro microcontrolador<br>1 Breadboard<br>Jumpers/Cabos para conexão<br>1 Ldr<br>3 Resistors de 220 ohms<br>1 Micro Servo 9g SG90<br>2 Leds
<br>Link para IDE: https://docs.arduino.cc/software/ide-v1

![Meu Projeto](circuito_arduino.png)

![Meu Projeto](Imagem_demonstrativa.jpg)

<div align="center">
  <a href="https://youtu.be/BFO7PU2HMyw" target="_blank">
    <img src="https://img.youtube.com/vi/BFO7PU2HMyw/0.jpg" alt="vídeo no GitHub" width="600">
  </a>
</div>

<div align="center">
  <iframe 
    width="600" 
    height="338" 
    src="https://www.youtube.com/embed/BFO7PU2HMyw" 
    frameborder="0" 
    allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" 
    allowfullscreen>
  </iframe>
</div>

Obs: O código deve ser ajustado com base nas leituras do sensor LDR exibidas no monitor. Para calibrar o limite de acionamento do motor, analise os valores recebidos e configure um limite que corresponda ao nível desejado de disparo. Isso garantirá que o motor seja acionado apenas quando os valores do sensor atingirem ou excederem o limite estabelecido.

O posicionamento do sensor no monitor deve levar em consideração vários fatores, como a velocidade do personagem e a velocidade de resposta do Arduino. É importante realizar testes para determinar o melhor ponto de calibração, ajustando o limite de disparo conforme necessário. A estrutura do código pode ser mantida, mas ajustes finos na lógica de acionamento são essenciais para otimizar a resposta do sistema e garantir um controle eficiente. 
