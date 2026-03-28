//Equipe.cpp
#include <iostream>
using namespace std;

#ifndef CARGO_H
    #include "Cargo.h"
#endif // CARGO_H

#ifndef FUNC_H
   #include "Func.h"
#endif // FUNC_H

#ifndef FUNCOES_H
   #include "Funcoes.h"
#endif // FUNCOES_H

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
/*
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
*/
    //f1.ler();

/* //Leitura direta no main
    cout << "\nLer Funcionario\n";
    int idFunc, idCargo;
    string nome, cargo;
    float salario;
    cout << "ID: ";
    cin >> idFunc;

    cout << "Nome: ";
    cin.ignore();
    getline(cin, nome);

    cout << "ID Cargo: ";
    cin >> idCargo;

    cout << "Cargo: ";
    cin.ignore();
    getline(cin, cargo);

    cout << "Salario: ";
    cin >> salario;

    f1.setId(idFunc);
    f1.setNome(nome);
    f1.Cargo::setId(idCargo);
    f1.setCargo(cargo);
    f1.setSalario(salario);
*/

   // lerFuncionario(f1);
   // imprimirFuncionario(f1);
    //f1.imprimir();

    Funcionario f3;
    lerFuncionario(f3);
    imprimirFuncionario(f3);
    //f3.imprimir();

}



