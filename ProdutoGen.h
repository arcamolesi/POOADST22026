//ProdutoGen.h
class ProdutoGen: Categoria{
   private:
     int id;
     string descricao;
     float qtde;
     float valor;

   public:
    ProdutoGen(): id(0), descricao(""), qtde(0), valor(0), Categoria() {}
    ProdutoGen(int id, string desc, float qtd, float val, Categoria cat):
         id(id), descricao(desc), qtde(qtd), valor (val), Categoria(cat) {}
    void imprimir();
};

void ProdutoGen::imprimir(){
   cout << "\nImprimir Produto\n";
   cout << "ID Produto: " << this->id << endl;
   cout << "Descricao Produto: " << this->descricao << endl;
   cout << "ID Categoria: " << Categoria::id<< endl;
   cout << "Descricao Categoria: " << Categoria::descricao << endl;
   cout << "Quantidade: " << this->qtde << endl;
   cout << "Valor: " << this->valor << endl;
}



