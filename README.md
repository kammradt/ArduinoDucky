# ArduinoDucky

**Sumário**
 - Introdução
 - Desenvolvimento
 - Resultado
----------
**Introdução**
<p>  O que é um Rubber Ducky? </p>
<p align=justify>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;O projeto foi completamente baseado em um outro pré-existente, originário da equipe de Podcasting Hak5. Rubber Ducky foi o nome dado a ferramenta capaz de emular as funções de um teclado, e assim executando os mais diversos comandos e ações, encaixando-o na categoria de dispositivos HID. </p>
<p align=justify>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Por HID - Human Interface Device -, compreende-se como um dispositivo aceito pelo sistema como responsável sendo por entrada de dados, exatamente igual a um teclado USB para computador, por exemplo. O que, finalmente, transformou a ferramente amada por diversos Pentesters, devido a sua facilidade de uso e de aplicação.</p>

<br>
<p align=center>Figura 1 - Rubber Ducky internamente</p>
<center><img src="https://cdn.shopify.com/s/files/1/0068/2142/products/4_35611eac-0b76-4cdb-a716-b37665b26bd9.jpg?v=1494296097"></center>
<p align=center>Fonte: HakShop (2018)</p>
<br>

<p align=justify>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;As instruções são escritas previamente e salvas no dispositivo. A linguagem possui sintaxe simples, direta e é chamadas de "Payloads". Segue um exemplo de Script que tem como função abrir o 'notepad' do Windows e escrever: "ArduinoDucky"</p>

    DELAY 3000
    GUI r
    DELAY 500
    STRING notepad
    DELAY 500
    ENTER
    DELAY 750
    STRING ArduinoDucky
    ENTER
<p align=justify>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Todavia, devido a dificuldade de compra, tanto devido ao valor alto e a exportação problemática brasileira, outras soluções chegam para suprir a necessidade. Então, visando um valor mais baixo e fácil disponibilidade para testes dos "pentesters", o Arduino Ducky cumpre uma função parecida, custando cerca de 1/10 do valor original. </p> 

<br>
<p align=center>Figura 2 - Arduino Uno (Modelo Popular)</p>
<center><img src="https://store-cdn.arduino.cc/usa/catalog/product/cache/1/image/520x330/604a3538c15e081937dbfbd20aa60aad/a/0/a000066_featured.jpg"></center>
<p align=center>Fonte: Arduino CC (2018)</p>
<br>

<p align=justify>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;O Arduino é uma plataforma de prototipagem muito famosa. Devido a vasta gama de modelos, diversos sensores, módulos, e baixo custo de acessórios, é a escolha ideal para este caso. </p> 

----------
**Desenvolvimento**
<p align=justify>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
Para que o objetivo de recriar o Rubber Ducky seja alcançado, algumas características principais precisam ser consideradas durante o processo.</p>
<p align=justify>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
<strong>O desejável:</strong>

 - Executar comandos via HID; 
 - Fácil/level/discreto para testes;
 - Aparência semelhante a de um Pendrive USB;
 - Possuir armazenamento suficiente para  diversos scripts/payloads/arquivos em geral;
 - Linguagem com sintaxe simples;
 - Custo reduzido;
 - Fácil acesso de compra ao dispositivo;
</p>
<p align=justify>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Tendo em vista tais objetivos, verificando-se aos objetivos primordiais, que seriam, manter intuitivo, barato e de fácil acesso comercial, <strong>foram utilizados:</strong></p>

 - 01 Arduino Pro Micro - (ATMEGA32U4);

----------
**Resultado**
<p>
✔
</p>

----------
