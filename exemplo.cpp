#include <iostream>

using namespace std;

class Pessoa{
private:
	int idade;	
	int creditoCafe;
public: 
	Pessoa(int idade){ // construtor com parametro.
		cout << "Construtor" << endl;
		this->idade = idade;
		this->creditoCafe = 5;
	}
	
	Pessoa(){
		cout << "Construtor sem parametros" << endl;
		this->idade = 28;
		this->creditoCafe = 10;
	
	}

	void mostrar(){
		cout << "Idade: " << this->idade << " | Credito: "  << this->creditoCafe << endl;
	}
	
};
//----------------------------------------------------------------------------
int main(){

	Pessoa josefa(35); // Nesse momento o construtor é executado
	josefa.mostrar();

	Pessoa joao;
	joao.mostrar();

	return 0;	

}
