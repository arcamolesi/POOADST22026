//Produto.h
class Produto{
   private:
     int id;
     string descricao;
     Categoria categoria;
     float qtde;
     float valor;

   public:
      Produto();
      Produto(int, string, Categoria, float, float);

      void imprimir();
};

Produto::Produto(){
   this->id = 0;
   this->descricao = "";
   this->categoria = Categoria();
   this->qtde = 0;
   this->valor = 0;
}

Produto::Produto(int id, string desc, Categoria cat, float qtde, float val){
    this->id = id;
    this->descricao = desc;
    this->categoria = cat;
    this->qtde = qtde;
    this->valor = val;
}

void Produto::imprimir(){
   cout << "\nImprimir Produto\n";
   cout << "ID Produto: " << this->id << endl;
   cout << "Descricao: Produto: " << this->descricao << endl;
   cout << "ID Categoria: " << this->categoria.getId()<< endl;
   cout << "Descricao Cat: " << this->categoria.getDescricao() << endl;
   cout << "Quantidade: " << this->qtde << endl;
   cout << "Valor: " << this->valor << endl;
}


