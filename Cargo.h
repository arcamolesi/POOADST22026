//Cargo.h
#include <iostream>
using namespace std;

#ifndef CARGO_H
   #define CARGO_H
#endif // CARGO_H


class Cargo{
    protected:
       int id;
       string cargo;

    public:
       Cargo(): id(0), cargo("") {}
       Cargo(int id, string cargo): id(id), cargo(cargo) { }

       int getId() {return this->id;}
       string getCargo() {return this->cargo;}

       void setId(int id) {this->id = id;}
       void setCargo(string cargo) {this->cargo = cargo;}

       void imprimir(){
          cout << "\nImprimir Cargo\n";
          cout << "ID Cargo: " << this->id << endl;
          cout << "Cargo: " << this->cargo << endl;
       }
};
