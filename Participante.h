//Participante.h
class Participante: public Tipoing{
   private:
       int id;
       string nome;
       string evento;
   public:

       void imprimir();


};

void Participante::imprimir(){
   cout << "\nImprimir Participante\n";
   cout << "ID: " << this->id << endl;
   cout << "Nome: " << this->nome << endl;
   cout << "Evento: "  << this->evento << endl;
   cout << "ID Tipo Ingresso: " << this->Tipoing::id << endl;
   cout << "Descricao: " << this->descricao << endl;
   cout << "Valor: " << this->valor << endl;

}




