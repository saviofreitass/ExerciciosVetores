#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char entrada[100];
    int modificados=0;

    cout << "Digite a string desejada: ";
    cin.getline(entrada,100);

    for(int i=0; i<strlen(entrada); i++){
        if(entrada[i]=='a'){
            entrada[i]='b';
            modificados++;
        }
    }

    cout << "\n\nForam modificadas " << modificados << " letra(s)";
    cout << "\n\nA string modificada eh: " << entrada;

    cout << "\n\n";
    system("pause");


    return 0;
}
