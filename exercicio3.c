#include <iostream>
using namespace std;

int main() {
    int idade;
    
    cout << "Digite sua idade: ";
    cin >> idade;
    
    cout << "\n";
    
    if(idade > 18) {
        cout << "Aprovado para participar do processo seletivo" << endl;
    }else{
        cout << "Não aprovado para participar do processo seletivo" << endl;
    }
}