//Viagem.h

class Viagem{
   private: //atributos
     int id;
     string descricao;
     int tipoComb; //1-Gas, 2-Diesel, 3-Etanol
     float kmSaida;
     float kmChegada;

   public: //
     Viagem(); // protótipo do método Construtor padrão para Viagem

     //protótipo do construtor parametrizado para Viagem
     Viagem(int, string, int, float, float);
     Viagem(int, int, string,  float, float);
     Viagem(int, string, int, float);

     void imprimir();
};


Viagem::Viagem () { //construtor padrão
   //cout << "\nPassei no construtor padrao\n";
   this->id = 0;
   this->descricao = "Viagem Padrao";
   this->tipoComb = 1;
   this->kmSaida = 0;
   this->kmChegada = 0;
}

Viagem::Viagem(int id, string desc, int tipo, float saida, float chegada){
    this->id = id;
    this->descricao = desc;
    this->tipoComb = tipo;
    this->kmSaida = saida;
    this->kmChegada = chegada;
}

Viagem::Viagem(int id,  int tipo, string desc, float saida, float chegada){
    this->id = id;
    this->descricao = desc;
    this->tipoComb = tipo;
    this->kmSaida = saida;
    this->kmChegada = chegada;
}

Viagem::Viagem(int id, string desc, int tipo, float saida){
    this->id = id;
    this->descricao = desc;
    this->tipoComb = tipo;
    this->kmSaida = saida;
    this->kmChegada = 0;
}

void Viagem::imprimir(){
    cout << "\nImprimir Viagem\n";
    cout << "ID: " << this->id << endl;
    cout << "Descricao: " << this->descricao << endl;
    cout << "Tipo Combustivel: " << this->tipoComb << endl;
    cout << "Km de Saida: " << this->kmSaida << endl;
    cout << "Km de Chegada: " << this->kmChegada << endl;
}




