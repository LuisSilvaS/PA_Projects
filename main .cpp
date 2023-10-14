#include <iostream>
#include "Sculptor.h"
#include <fstream>
#include <iomanip>


using namespace std;

int main(){
    Sculptor draw (100, 100, 100);
  
    // Cabeça
    draw.setColor (1,1,1,1); // Branco
    draw.putBox (49,53,67,72,61,64);

    // Olhos
    draw.setColor (0,0,0,1); // Preto
    draw.putBox (52,53,70,71,63,64);
    draw.putBox (49,50,70,71,63,64);

   // Corpo
   draw.setColor (1,1,1,1); // Branco
   draw.putBox (47,55,62,68,55,63);

  // Rabinho
   draw.setColor(1, 1, 1, 1); // Branco
   draw.putBox (50,52,65,67,54,55);

  // Asas
   draw.setColor(1, 1, 1, 1); // Branco
   draw.putBox (55,56,64,68,56,62);
   draw.putBox (46,47,64,68,56,62);

  // Pernas
   draw.setColor (1,0.65,0,1); // Laranja
   draw.putBox (52,53,60,62,59,60);
   draw.putBox (49,50,60,62,59,60);
  
  // Pés
   draw.setColor (1,0.65,0,1); // Laranja
  draw.putBox (52,53,59,60,59,62);
  draw.putBox (49,50,59,60,59,62);

  // Dedos
  draw.setColor (1,0.65,0,1); // Laranja
  draw.putBox (48,54,59,60,59,60);
  
  // Bico
  draw.setColor (1 ,0.65, 0 ,1); // Laranja
  draw.putBox (49,53,67,69,63,66);

  // Barbela
  draw.setColor (1,0,0,1); // Vermelho
  draw.putBox (50,52,66,67,62,65);

  draw.writeOFF("minecraftChiken.off");
  return 0;
}