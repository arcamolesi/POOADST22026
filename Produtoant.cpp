//Produto.cpp
#include <iostream>
using namespace std;

#include "Produto.h"

int main (){
    Produto prod1;  //instanciação do objeto prod1
    prod1.ler();
    prod1.imprimir(); //invocação do método imprimir para o obj prod1

    prod1.aumentar();
    prod1.imprimir();

    prod1.aumentar();
    prod1.imprimir();


    //Produto prod2;
    //prod2.ler();
    //prod2.imprimir();

}







