#include <iostream>
#include <map>

using namespace std;

int main(){
    map <string, string> telefones;
    string nome;

    do{
        cout << "Informe um nome (sair para fechar o programa): ";
        cin >> nome;

        if(nome == "sair") break;

        if(telefones.find(nome) != telefones.end()){
            cout << "Telefone já adicionado: " << telefones[nome] << endl;
        }else{
            cout << "Infome o número: ";
            cin >> telefones[nome];
        }
    }while(true);

    cout << endl;
    for(auto elemento : telefones){
        cout << elemento.first << ", número de telefone: " << elemento.second << endl;
    }
    return 0;
}