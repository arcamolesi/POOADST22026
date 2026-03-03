//Tipoing.h
class Tipoing {
  protected: //atributos
      int id;
      string descricao;
      float valor;

  public: //métodos
      //construtor padrão inline'
      Tipoing(): id(0), descricao("ing padrao"), valor(0.0) { }
      //construtor parametrizado inline
      Tipoing(int id, string desc, float valor):
            id(id), descricao(desc), valor(valor) {}
      //Tipoing(int, string, float); // implementação tradicional

      //métodos get inline
      int getId() {return this->id; }
      string getDescricao() {return this->descricao;}
      float getValor() {return this->valor;}

      //métodos set inline
      void setId(int id) {this->id = id;}
      void setDescricao(string desc) {this->descricao = desc;}
      void setValor(float valor) { (valor>0)? this->valor=valor: this->valor = 0;}

      void imprimir();
};

void Tipoing::imprimir(){
   cout << "\nImprimir Tipo Ingresso\n";
   cout << "ID: " << this->id << endl;
   cout << "Descricao: " << this->descricao << endl;
   cout << "Valor: " << this->valor << endl;
}


/*
Tipoing::Tipoing(int id, string descricao, float valor){
   this->id = id;
   this->descricao = descricao;
   this->valor = valor;
}
*/
