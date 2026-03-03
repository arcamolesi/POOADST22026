//Eventos.cpp
#include <iostream>
using namespace std;
#include "Tipoing.h"
#include "Participante.h"

int main () {
   Tipoing tp1 ;
   tp1.imprimir();

   tp1.setId(1);
   tp1.setDescricao("Inteiro");
   tp1.setValor(25);
   tp1.imprimir();

   Tipoing tp2(2, "Meia Entrada", 12.5);
   tp2.imprimir();

   cout << "\n\nEstou imprimindo participantes\n";
   Participante par1;
   par1.imprimir();

}
