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
   cout << "\n\nimprimir tipo ing por heranca de participante\n";
   par1.Tipoing::imprimir();

   Participante par2 (20, "Ygor", "Curso C++", 2, "Meia", 5);
   par2.imprimir();

   cout << "\n\nid participante: " << par2.getId() << endl;
   cout << "\nid tipo ingresso: " << par2.Tipoing::getId() << endl;

//   cout << par1.descricao << endl;


}
