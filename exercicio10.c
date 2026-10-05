#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main () {
	string nome, projeto;
	int opcao;
	double valorProjeto, valor;
	char urgente;

	cout << "Digite seu nome: ";
	getline(cin,nome);

	cout<< "Digite a opção de projeto:\n1 - Site institucional: R$2000,00\n2 - Aplicativo mobile: R$5000,00\n3 - Site WEB: R$8000,00\n0 - Sair\n";
	cin>> opcao;

	switch(opcao) {
	case 1:
		projeto ="Site institucional";
		valorProjeto = 2000;
		break;

	case 2:
		projeto ="Aplicativo Mobile";
		valorProjeto = 5000;
		break;

	case 3:
		projeto ="Site WEB";
		valorProjeto = 8000;
		break;

	case 0:
		cout << "saindo do programa..." << endl;
		return 0;

	default:
		cout<< "Opção inválida";
		break;
	}
			cout << "É urgente? (S/N)\n";
			cin >> urgente;
		if(tolower(urgente) == 's') {
			valor = valorProjeto * 1.2;
		} else {
			valor = valorProjeto;
		}

		cout<< "\nCliente: " << nome;
		cout<< "\nProjeto: " << projeto;
		cout <<"\nUrgente: " << urgente;
		cout<< "\nValor final: " << valor << endl;
	}