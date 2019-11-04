#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main(){
    ifstream arquivo;
    arquivo.open("texto.txt");
    map <string,int> contador;
    string palavra;

    while(arquivo >> palavra){
        contador[palavra]++;
    }
    
    for(auto elemento : contador){
        cout << elemento.first << " tem frequência: " << elemento.second << endl;
    }
}