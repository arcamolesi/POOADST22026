//loja.cpp
#include <iostream>
using namespace std;
#include "Categoria.h"
#include "Produto.h"

int main(){
    Categoria cat1;
    cat1.imprimir();

    Categoria cat2(10, "Bebidas");
    cat2.imprimir();

    cat1.setId(20);
    cat1.setDescricao("Alimentos");
    cat1.imprimir();

    cout << "ID Cat: " << cat1.getId() << endl;

    Produto prod1;
    prod1.imprimir();

    Produto prod2(1, "Suco Laranja", cat2, 50, 15);
    prod2.imprimir();

    Produto prod3(2, "Cerveja", cat2, 20, 7.56);
    prod3.imprimir();

    Produto prod4(3, "Arroz", cat1, 15, 24.8);
    prod4.imprimir();


}





