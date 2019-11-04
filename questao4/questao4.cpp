#include <iostream>
#include <map>
#include <iomanip>
#include <vector>

using namespace std;

int main(){
    map <string,string> ocorrencias;
    string local, prioridade, responsavel;

    cout << "Informe o local: ";
    getline(cin, local);
    cout << "Informe a prioridade: ";
    getline(cin, prioridade);
    cout << "Informe o responsável: ";
    getline(cin, responsavel);

    ocorrencias["Local"] = local;
    ocorrencias["Prioridade"] = prioridade;
    ocorrencias["Responsável"] = responsavel;

    cout << endl;
    for(auto elemento : ocorrencias){
        cout << setw(15) << left << elemento.first;
    }

    cout << endl << endl;

    for(auto elemento : ocorrencias){
        cout << setw(15) << left << elemento.second;
    }

    cout << endl << endl;
    return 0;
}