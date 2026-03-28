//Funcoes.h
#include <iostream>
using namespace std;

#ifndef CARGO_H
  #include "Cargo.h"
#endif // CARGO_H

#ifndef FUNC_H
   #include "Func.h"
#endif // FUNC_H

#ifndef FUNCOES_H
   #define FUNCOES_H
#endif // FUNCOES_H


//função para ler funcionario, não pertence a classe Funcionario
void lerFuncionario(Funcionario &func) {
   int idFunc, idCargo;
   string nome, cargo;
   float salario;

   cout << "\nLeitura de Funcionario\n";
   cout << "ID Func: ";
   cin >> idFunc;
   func.setId(idFunc);

   cout << "Nome: ";
   cin.ignore();
   cin >> nome;
   func.setNome(nome);

   cout << "Salario: ";
   cin >> salario;
   func.setSalario(salario);

   cout << "ID Cargo: ";
   cin >> idCargo;
   func.Cargo::setId(idCargo);

   cout << "Cargo: ";
   cin.ignore();
   cin >> cargo;
   func.setCargo(cargo);

}

 void imprimirFuncionario(Funcionario func){
    cout << "\nImprimir Funcionario\n";
    cout << "ID Funcionario: " << func.getId() << endl;
    cout << "Nome: " << func.getNome() << endl;
    cout << "Cargo: " << func.Cargo::getId() << " - " << func.getCargo() << endl;
    cout << "Salario: " << func.getSalario() << endl;
}
