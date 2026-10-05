#include <iostream>
#include <string>
using namespace std;

int main () {
    string senhaPrincipal, senhaSolicitada;
    senhaPrincipal = "2026";
    
    cout << "Digite a senha: ";
    getline(cin, senhaSolicitada);
    
    while(senhaSolicitada != senhaPrincipal){
        cout <<"Acesso negado.\nSenha incorreta" << endl;
        
        cout << "Digite novamente: ";
        getline(cin, senhaSolicitada);
    }
    cout << "Acesso permitido";
}