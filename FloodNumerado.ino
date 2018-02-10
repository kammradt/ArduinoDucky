#include "Keyboard.h";
//Declarar a variável que vai contar e imprimir
int numero = 0;

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
// Programa baseado em 'loop'
}

void loop() 
{
  #include "Keyboard.h"
  Keyboard.begin();
  delay(250);
  //Iniciar modo e delay do loop
  
  Keyboard.print("Mensagem - ");
  Keyboard.println(numero);
  //Digitar mensagem - Arrumar a separação de texto+variável
  
  Keyboard.press(KEY_RETURN);
  //Enviar - Enter 
  
  Keyboard.releaseAll();
  //Soltar
  
  numero++;
  //Contador da variável 'numero'
  
  Keyboard.end();
  //Finaliza o modo
}

/* Essa área foi destinada a testar o programa, já que toda vez que ele
 é conectado ao pc, inicia o código em loop
 
*/


