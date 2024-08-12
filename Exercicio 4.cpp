#include <iostream>

using namespace std;

void testaMaiorMenor(int e, int teste, int &maior, int &maior2){
    if(e==0){
        maior = teste;
        maior2 = teste;
    }

    if(teste > maior){
        maior2 = maior;
        maior = teste;
    }else if(teste > maior2){
        maior2 = teste;
    }
}

int main(){

    int i;

    cout << "Digite a quantidade de valores que voce deseja adicionar: ";
    cin >> i;

    while(i>10 || i<1){
        cout << "Numero deve ser menor ou igual a 10 e maior que 0! Digite novamente: ";
        cin >> i;
    }

    int array[i], vMaior, vMaior2, somaParNoImpar;

    for(int o=0;o<i;o++){
        cout << "Digite o valor desejado: ";
        cin >> array[o];

        if(array[o]<0){
            cout << "Valor deve ser positivo!\n";
            o--;
        }

         testaMaiorMenor(o, array[o], vMaior, vMaior2);

         if((o%2!=0) && array[o]%2==0){
            somaParNoImpar += array[o];
         }
    }

    cout << "\nOs maiores valores sao: "<< vMaior << " e " << vMaior2;
    cout << "\nA soma dos valores pares nas posicoes impares eh: " << somaParNoImpar << "\n\n";

    system("pause");

return 0;
}
