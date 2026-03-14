//Categoria.h
class Categoria{
   protected:
     int id;
     string descricao;
   public:
     Categoria(): id(0), descricao("") {}
     Categoria(int id, string desc): id(id), descricao(desc) {}

     int getId() {return this->id;}
     string getDescricao() {return this->descricao;}

     void setId(int id) {this->id = id;}
     void setDescricao(string desc) {this->descricao = desc;}

     void imprimir();

};

void Categoria::imprimir(){
    cout << "\nImprimir Categoria\n";
    cout << "ID: " << this->id << endl;
    cout << "Descricao: " << this->descricao << endl;
}



