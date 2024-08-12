#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char nome[50], menorNome[50];
    int i=0;

    cout << "Digite os nomes, para cancelar envie uma linha vazia\n";

    while(1){
        cin.getline(nome,50);

        if(strlen(nome)==0){
            break;
        }

        if(i==0){
            strcpy(menorNome,nome);
            i++;
        }else if(strcmp(nome, menorNome)<0){
            strcpy(menorNome,nome);
        }
    }

    cout << "O menor nome lexicograficamente eh: " << menorNome<< endl;

    system("pause");
return 0;
}
