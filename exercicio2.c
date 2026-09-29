#include <iostream>
using namespace std;

int main() {
	int horas1, horas2, total;
	cout << "Digite as horas para conclusão da funcionalidade 1: ";
	cin >> horas1;

	cout << "Digite as horas para conclusão da funcionalidade 2: ";
	cin >> horas2;

	total = horas1 + horas2;

	cout << "A previsão para o desenvolvimento é de " << total<< " horas" << endl;
}