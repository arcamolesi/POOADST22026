//Equipe.cpp
#include <iostream>
using namespace std;
#include "Cargo.h"
#include "Func.h"

int main(){
    Cargo c1;
    c1.imprimir();

    Cargo c2 ;//(3, "Professor");
    c2.imprimir();

    cout << "\nImprimir Funcionarios\n";

    Funcionario f1;
    f1.Cargo::imprimir();
    f1.imprimir();

    Funcionario f2(2, "Begosso", 15000, Cargo(5, "Diretor TI"));
    f2.imprimir();

    //f2.aumentoPadrao();
    f2.aumento();
    f2.imprimir();

    cout << "\nInfome o percentual de aumento: ";
    int percent=50;
    //cin >> percent;
    //f2.aumentoPorPercentual(percent);
    f2.aumento(percent);
    f2.imprimir();

    //f2.aumentoPorValor(3000);
    f2.aumento((float)3000);
    f2.imprimir();

}



