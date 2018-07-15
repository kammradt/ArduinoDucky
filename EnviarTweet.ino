#include "Keyboard.h"
int contador = 0;

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
  delay(10000);
  // Delay de 10s para iniciar.

  Keyboard.press('n');
  Keyboard.releaseAll();
  delay(1000);
  // Pressiona 'n' -> atalho para novo Tweet e espera 1s .
  
  Keyboard.print("Minha primeira linha");
  delay(500);
  // Digita 'Minha primeira linha' via teclado e espera 1s.
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  // Pressiona ENTER e solta.
  delay(1000);
  
  Keyboard.print("Minha segunda linha, quantidade de mensagens > ");
  delay(500);
  // Digita 'Minha segunda linha, quantidade de mensagens > ' via teclado e espera 1/2s.
  Keyboard.print(contador);
  delay(1000);
  // Adiciona o contador ao final da linha anterior e espera 1s.

  contador++;
  // Adiciona ao contador

  Keyboard.press(KEY_LEFT_CTRL);
  delay(1000);
  Keyboard.press(KEY_RETURN);
  // Pressiona CTRL (espera 1s) + ENTER para enviar.

  Keyboard.releaseAll();
  // Solta todas as teclas
  
  Keyboard.end();  
}

