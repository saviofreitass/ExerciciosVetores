#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char entrada1[100], entrada2[100];

    cout << "Digite a primeira string: ";
    cin.getline(entrada1,100);

    cout << "Digite a segunda string: ";
    cin.getline(entrada2,100);

    cout << "\n\nO tamanho da string 1 eh: " << strlen(entrada1) << " e a segunda letra eh: " << entrada1[1];
    cout << "\n\nO tamanho da string 2 eh: " << strlen(entrada2) << " e a penultima letra eh: " << entrada2[strlen(entrada2)-2];

    cout << "\n\n";
    system("pause");


return 0;
}
