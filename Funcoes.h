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

void lerFuncionario(Funcionario &func){
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

    func.setId(idFunc);
    func.setNome(nome);
    func.Cargo::setId(idCargo);
    func.setCargo(cargo);
    func.setSalario(salario);
}


void imprimirFuncionario(Funcionario func){
    cout << "\nImprimir Funcionario\n";
    cout << "ID Funcionario: " << func.getId() << endl;
    cout << "Nome: " << func.getNome() << endl;
    cout << "Cargo: " << func.Cargo::getId() << " - " << func.Cargo::getCargo()<< endl;
    cout << "Salario: " << func.getSalario() << endl;
}
