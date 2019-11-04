#include <iostream>
#include <map>

using namespace std;

int main(){
    map<int,int> num;
    int n;

    cout << "Informe um número: ";
    cin >> n; 

    for(int i = 1; i <= n; i++){
        num[i] = i*i;
    }

    for(auto elemento : num){
        cout << elemento.first << ": " << elemento.second << ", ";
    }
    
    cout << endl;
}