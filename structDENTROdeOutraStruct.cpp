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
	cin.ignore();     // Consumir o caractere de nova linha deixado no buffer de entrada após cin.
    //é importante usar cin.ignore() para consumir o caractere de nova linha deixado no buffer de entrada. Isso garante que a leitura subsequente com getline para endereco.rua funcione corretamente.
	
	cout << "___Endereço___" << endl;
	cout << "Rua: ";
	getline(cin, pessoa.endereco.rua);
	
	cout << "Número: ";
	cin >> pessoa.endereco.numero;
	
	cout << "\nDados da Pessoa:" << endl;
	cout << "Nome: " << pessoa.nome << endl;
	cout << "Idade: " << pessoa.idade << endl;
	cout << "Endereço: " << pessoa.endereco.rua << ", " << pessoa.endereco.numero << endl;
	
	return 0;
	
}
