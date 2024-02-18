#include <iostream>
#include <iostream>
using namespace std;

struct Endereco {
	string rua;
	int numero;
};

struct Pessoa {
	string nome;
	int idade;
	Endereco endereco;
};

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	Pessoa pessoa;
	
	cout << "::: Gestao de Pessoas ::::" << endl;
	
	cout << "Nome: ";	
	getline(cin, pessoa.nome);
	
	cout << "Idade: ";	
	cin >> pessoa.idade;
	cin.ignore();     // Consumir o caractere de nova linha deixado no buffer de entrada ap�s cin.
    //� importante usar cin.ignore() para consumir o caractere de nova linha deixado no buffer de entrada. Isso garante que a leitura subsequente com getline para endereco.rua funcione corretamente.
	
	cout << "___Endere�o___" << endl;
	cout << "Rua: ";
	getline(cin, pessoa.endereco.rua);
	
	cout << "N�mero: ";
	cin >> pessoa.endereco.numero;
	
	cout << "\nDados da Pessoa:" << endl;
	cout << "Nome: " << pessoa.nome << endl;
	cout << "Idade: " << pessoa.idade << endl;
	cout << "Endere�o: " << pessoa.endereco.rua << ", " << pessoa.endereco.numero << endl;
	
	return 0;
	
}
