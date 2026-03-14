//loja.cpp
#include <iostream>
using namespace std;
#include "Categoria.h"
#include "Produto.h"
#include "ProdutoGen.h"

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

    Produto prod5(5, "Goiaba", Categoria(50,"Frutas"), 10, 7.45);
    prod5.imprimir();

    cout << "\nDescricao do prod5: " << prod5.getDescricao() << endl;
    cout << "Id prod5: " << prod5.getId() << endl;
     //navegabilidade em objetos
    cout << "Desc Cat prod5: " << prod5.getCategoria().getDescricao() << endl;
    cout << "Id cat prod5: " << prod5.getCategoria().getId() << endl;
    cout << "qtde prod5: " << prod5.getQtde() << endl;
    cout << "valor prod5: " << prod5.getValor() << endl;

    prod5.setDescricao("Pitanga");
    prod5.setValor(15.8);

    prod5.getCategoria().setDescricao("Eletronico");
    Categoria aux;
    aux = prod5.getCategoria();
    aux.setDescricao("Eletronico");
    prod5.setCategoria(aux);

    prod5.imprimir();

    ProdutoGen pgen;
    pgen.imprimir();

    ProdutoGen pgen1(5, "Celular", 10, 1000, Categoria(15, "Eletronicos"));
    pgen1.imprimir();
}





