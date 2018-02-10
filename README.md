
<div align="center"><h1>ArduinoDucky</h1></div>
<div align="center"><h1>Sumário</h1></div>

 - **Introdução**
 - **Desenvolvimento**
 - **Resultado**

<div align="center"><h1>Introdução</h1></div>

<p> <strong> O que é um Rubber Ducky?</strong> </p>
<p align=justify>&emsp;&emsp;&emsp;O projeto foi completamente baseado em um outro pré-existente, originário da equipe de Podcasting Hak5. Rubber Ducky foi o nome dado a ferramenta capaz de emular as funções de um teclado, e assim executando os mais diversos comandos e ações, encaixando-o na categoria de dispositivos HID. </p>
<p align=justify>&emsp;&emsp;&emsp;Por HID - Human Interface Device -, compreende-se como um dispositivo aceito pelo sistema como responsável sendo por entrada de dados, exatamente igual a um teclado USB para computador, por exemplo. O que, finalmente, transformou a ferramente amada por diversos Pentesters, devido a sua facilidade de uso e de aplicação.</p>

<br>
<p align=center>Figura 1 - Rubber Ducky internamente</p>
<div align="center"><img src="https://cdn.shopify.com/s/files/1/0068/2142/products/4_35611eac-0b76-4cdb-a716-b37665b26bd9.jpg?v=1494296097"></div>
<p align=center>Fonte: HakShop (2018)</p>
<br>

<p align=justify>&emsp;&emsp;&emsp;As instruções são escritas previamente e salvas no dispositivo. A linguagem possui sintaxe simples, direta e é chamadas de "Payloads". Segue um exemplo de Script que tem como função abrir o 'notepad' do Windows e escrever: "ArduinoDucky"</p>

    DELAY 3000
    GUI r
    DELAY 500
    STRING notepad
    DELAY 500
    ENTER
    DELAY 750
    STRING ArduinoDucky
    ENTER
<p align=justify>&emsp;&emsp;&emsp;Todavia, devido a dificuldade de compra, tanto devido ao valor alto e a exportação problemática brasileira, outras soluções chegam para suprir a necessidade. Então, visando um valor mais baixo e fácil disponibilidade para testes dos "pentesters", o Arduino Ducky cumpre uma função parecida, custando cerca de 1/10 do valor original. </p> 

<br>
<p align=center>Figura 2 - Arduino Uno (Modelo Popular)</p>
<div align="center"> <img src="https://store-cdn.arduino.cc/usa/catalog/product/cache/1/image/520x330/604a3538c15e081937dbfbd20aa60aad/a/0/a000066_featured.jpg"></div>
<p align=center>Fonte: Arduino CC (2018)</p>
<br>

<p align=justify>&emsp;&emsp;&emsp;O Arduino é uma plataforma de prototipagem muito famosa. Devido a vasta gama de modelos, diversos sensores, módulos, e baixo custo de acessórios, é a escolha ideal para este caso. </p> 
 <br>
 
<div align="center"><h1>Desenvolvimento</h1></div>

<p align=justify>&emsp;&emsp;&emsp;Para que o objetivo de recriar o Rubber Ducky seja alcançado, algumas características principais precisam ser consideradas durante o processo.</p>
<p align=justify>&emsp;&emsp;&emsp;
<strong>O desejável:</strong>

 - Executar comandos via HID; 
 - Fácil/level/discreto para testes;
 - Aparência semelhante a de um Pendrive USB;
 - Possuir armazenamento suficiente para  diversos scripts/payloads/arquivos em geral;
 - Linguagem com sintaxe simples;
 - Custo reduzido;
 - Fácil acesso de compra ao dispositivo.
</p>
<p align=justify>&emsp;&emsp;&emsp;Tendo em vista tais objetivos, verificando-se aos objetivos primordiais, que seriam, manter intuitivo, barato e de fácil acesso comercial, <strong>foram utilizados:</strong></p>

 - 01 Arduino Pro Micro - (ATMEGA32U4);
 - 01 Adaptador USB Male/Female para Micro USB;
 - 01 OTG - USB Female para Micro USB;
 - 01 Cabo USB Male para Micro USB (Cabo para carregar celular);
 - 01 Case para o Arduino (Opcional)
 -  ---  Computador com acesso a IDE Arduino.
 <br>
 
 <p align=justify>&emsp;&emsp;&emsp;As imagens de cada item, respectivamente, são encontradas abaixo, previamente juntas de uma breve descrição de suas funções.</p>
 <p align=justify>&emsp;&emsp;&emsp;O Arduino Pro Micro foi selecionado para esse caso, devido a uma série de razões: tamanho compacto; entrada Micro USB; bibliotecas compatíveis; baxo valor; fácil importação; dentre outros.</p>
 

<p align=center>Figura 3 - Arduino Pro Micro(Modelo Utilizado)</p>
<div align="center"> <img src="https://www.arduino-board.com/images/thumbs/dr-pro-micro.jpg"></div>
<p align=center>Fonte: Arduino Board (2018)</p>
<br>

 <p align=justify>&emsp;&emsp;&emsp;O Adaptador pode ser usado em diversas ocasiões, já que ele converte a entrada Micro USB presente no Arduino Pro Micro, tanto para um USB Male, habilitando o memso ser usado como um pendrive regular no computador. Ou serve de USB Female, para ser conectado ao adaptador OTG, e or sua vez, ser conectado em algum outro dispositivo via Micro USB, atuando como Micro USB - Micro USB.</p>
<p align=center>Figura 4 -Adaptador USB Male/Female para Micro USB</p>
<div align="center"> <img height="300" width="300" src="https://ae01.alicdn.com/kf/HTB1ibkyLVXXXXaAXpXXq6xXFXXXp/220863469/HTB1ibkyLVXXXXaAXpXXq6xXFXXXp.jpg?size=87602&height=1000&width=100&hash=fbe7b473c64b0712a0067396cf52985d"></div>
<p align=center>Fonte: Autor (2018)</p>
<br>

 <p align=justify>&emsp;&emsp;&emsp;Os adaptadore OTG já são amplamente utilizados em conjunto com celulares Android e outros dispositivos USB. Uma grande variedade de combinações podem ser utilizadas, como por exemplo, utilizar um mouse ou um teclado no celular.</p>
 <p align=justify>&emsp;&emsp;&emsp;Nesse caso, ele foi usado em conjunto com o adaptador citado acima, para que a entrada Female Micro USB do Arduino Pro Micro se tornasse um Male Micro USB. Dessa maneira, utilizando o Arduino Pro Micro diretamente em um dispositivo com conexão Micro USB, como um celular, por exemplo.</p>
<p align=center>Figura 5 - OTG - USB Female para Micro USB</p>
<div align="center"> <img height="300" width="300" src="https://http2.mlstatic.com/adaptador-otg-usb-20-femea-x-micro-usb-v8-macho-D_NQ_NP_456311-MLB20544240913_012016-F.jpg"></div>
<p align=center>Fonte: Autor (2018)</p>
<br>

 <p align=justify>&emsp;&emsp;&emsp;O cabo tem exatamente a mesma função do adaptador OTG. Todavia, ele acaba garantindo uma extensão caso necessário.</p>
<p align=center>Figura 6 - Cabo USB Male para Micro USB</p>
<div align="center"> <img height="300" width="300" src="http://mlb-s1-p.mlstatic.com/cabo-para-celular-v8-east-gate-carrega-3x-mais-rapido-1m-top-547511-MLB20583688259_022016-F.jpg"></div>
<p align=center>Fonte: Autor (2018)</p>
<br>

 <p align=justify>&emsp;&emsp;&emsp;Para fins estéticos, e de proteção, é interessante o uso de um case. Podendo ser de um Pendrive antigo, ou até mesmo impresso com uso de impressoras 3D.</p>
<p align=center>Figura 7 - Case para o Arduino</p>
<div align="center"> <img src="http://i.imgur.com/6F054UT.png"></div>
<p align=center>Fonte: Michal Monday
(2018)</p>
<br>

 <p align=justify>&emsp;&emsp;&emsp;Para fazer todo o carregamento do script/payload no Arduino Pro Micro, independente da conexão e/ou adaptador, a IDE disponibilizada pelo próprio Arduino é essencial.</p>
<p align=center>Figura 8 - Computador com acesso a IDE Arduino</p>
<div align="center"> <img src="https://blog.arduino.cc/wp-content/uploads/2016/03/before.png"></div>
<p align=center>Fonte: Arduino CC (2018)</p>
<br>

 <p align=justify>&emsp;&emsp;&emsp;Em relação, especificamente aos scripts/payloads e sua sintaxe/linguagem, no tópico final será explicado de maneira detalhada seu funcionamento. </p>

<p>
<div align="center"><h1>Resultado</h1></div>
✔✖
</p>

----------
