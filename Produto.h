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

      //gets
      int getId() {return this->id;}
      string getDescricao() {return this->descricao;}
      Categoria getCategoria() {return this->categoria;}
      string getCatDesc() {return categoria.getDescricao();}
      float getQtde() {return this->qtde;}
      float getValor() {return this->valor;}

      //sets
      void setId(int id) {this->id = id;}
      void setDescricao(string desc) {this->descricao = desc;}
      void setCategoria(Categoria cat) {this->categoria = cat;}
      void setCatDes(string desc) {this->categoria.setDescricao(desc);}
      void setQtde(float qtde) {this->qtde = qtde;}
      void setValor(float val) {this->valor = val;}

      //outros métodos
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
   cout << "Descricao Produto: " << this->descricao << endl;
   cout << "ID Categoria: " << this->categoria.getId() << endl;
   cout << "Descricao Categoria: " << this->categoria.getDescricao() << endl;
   cout << "Quantidade: " << this->qtde << endl;
   cout << "Valor: " << this->valor << endl;
}





