#include <iostream>
#include <map>
#include <iomanip>
#include <vector>

using namespace std;

int main(){
    map <string, vector<string> > ocorrencias;
    string local, prioridade, responsavel;
    int contador = 0;
   
    cout << "Digite 'sair' para parar de adicionar novas informações." << endl << endl;

    do{
        cout << "Informe o local: ";
        getline(cin, local); if(local == "sair") break;
        cout << "Informe a prioridade: ";
        getline(cin, prioridade); if(prioridade == "sair") break;
        cout << "Informe o responsável: ";
        getline(cin, responsavel); if(responsavel == "sair") break;
        cout << endl;

        ocorrencias["Local"].push_back(local);
        ocorrencias["Prioridade"].push_back(prioridade);
        ocorrencias["Responsável"].push_back(responsavel);

        contador++;
    }while(true);
    

    cout << endl;
    for(auto elemento : ocorrencias){
        cout << setw(15) << left << elemento.first;
    }

    cout << endl << endl;

    
    for(int i = 0; i < contador; i++){
        for(auto elemento : ocorrencias){
            cout << setw(15) << left << ocorrencias[elemento.first][i];
        }
        cout << endl;
    }

    cout << endl << endl;
    return 0;
}