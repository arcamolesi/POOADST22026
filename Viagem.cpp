//Viagem.cpp
#include <iostream>
using namespace std;
#include "Viagem.h"

int main (){
    Viagem v1;
    v1.imprimir();
    Viagem v2;

   Viagem v3(10, "Assis/SP", 3, 54278.8, 54760.4);
   v3.imprimir();

   Viagem v4 (12, "Assis/Bauru", 1, 63127);
   v4.imprimir();

   Viagem v5 (12, 2, "Assis/Marilia", 54278.8, 54760.4);
   v5.imprimir();
}
