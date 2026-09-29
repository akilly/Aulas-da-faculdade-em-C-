#include <iostream>
#include <string>
using namespace std;

int main() {

	string nome;
	int idade;
	string linguagemPreferida;
	int projetosConcluidos;


	cout << "Digite seu nome: ";
	getline(cin, nome);

	cout << "Digite sua idade: ";
	cin >> idade;
	cin.ignore();

	cout << "Digite a sua linguem de programação preferida: ";
	getline (cin, linguagemPreferida);

	cout << "Digite a quantidade de projetos já desenvolvidos: ";
	cin >> projetosConcluidos;
	cout << "\n";

	cout <<"Seu nome é : " << nome << endl;
	cout << "Sua idade é : "<<idade << endl;
	cout << "Sua linguagem preferida é : " << linguagemPreferida << endl;
	cout << "A quantidade de projetos já concluidos é : " << projetosConcluidos << endl;
}