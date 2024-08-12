#include <iostream>

using namespace std;

int main(){
int numeros[5], somaImpares;
for(int i=0; i<5; i++){
cout << "Digite um valor inteiro: ";
cin >> numeros[i];

if(numeros[i]%2!=0){
    somaImpares += numeros[i];
}
}

cout << "\nA soma dos numeros impares eh: " << somaImpares << "\n\n";

system("pause");

return 0;
}
