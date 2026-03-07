//Participante.h
class Participante: public Tipoing{
   private:
       int id;
       string nome;
       string evento;
   public:
      //construtores
      Participante();
      Participante(int, string, string, int, string, float);

      //gets
      int getId(){return this->id;}
      string getNome() {return this->nome;}
      string getEvento() {return this->evento;}

      //sets
      void setId(int id) {this->id = id;}
      void setNome (string nome) {this->nome = nome;}
      void setValor (string evento) {this->evento = evento;}


      void imprimir();
};

//construtor padrão
Participante::Participante(){
   this->id = 0;
   this->nome = "";
   this->evento = "";
   //poderia pegar o padrão de Tipoing
   Tipoing::id = 0;
   Tipoing::descricao = "";
   Tipoing::valor = 0;
}

//construtor parametrizado
Participante::Participante(int idPar, string nome, string evento, int idIng, string desc, float val){
   this->id = idPar;
   this->nome = nome;
   this->evento = evento;
   Tipoing::id = idIng;
   Tipoing::descricao = desc;
   Tipoing::valor = val;
}


void Participante::imprimir(){
   cout << "\nImprimir Participante\n";
   cout << "ID: " << this->Participante::id << endl;
   cout << "Nome: " << this->nome << endl;
   cout << "Evento: "  << this->evento << endl;
   cout << "ID Ingresso: " << this->Tipoing::id << endl;
   cout << "Descricao: " << this->descricao << endl;
   cout << "Valor: " << this->valor << endl;

}




