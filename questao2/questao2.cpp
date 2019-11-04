#include <iostream>
#include <map>

using namespace std;

int main(){
    string palavra;
    map <char, int> contador;

    cout << "Informe uma string: ";
    getline(cin, palavra);

    for(int i = 0; i < palavra.size(); i++){
        if(palavra[i] != ' '){
            contador[palavra[i]]++;
        }
    }
    
    /*for (auto elemento : palavra){
        if(elemento != ' '){
            contador[elemento] ++;
        }
    */}

    for(auto elemento : contador){
        cout << "'" << elemento.first << "': " << elemento.second << ", ";
    }

    cout << endl;
    return 0;
}