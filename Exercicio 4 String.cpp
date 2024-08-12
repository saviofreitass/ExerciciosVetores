#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char profissao[50];
    double salario, novoSalario;

    cout << "Digite sua profissao: ";
    cin.getline(profissao, 50);

    cout << "\nDigite seu salario: ";
    cin >> salario;

    if(strcmp(profissao, "gerente") == 0 || strcmp(profissao, "Gerente") == 0){
        novoSalario=salario+(salario*10/100);
    }else if(strcmp(profissao, "engenheiro")== 0 || strcmp(profissao, "Engenheiro") == 0){
        novoSalario=salario+(salario*20/100);
    }else if(strcmp(profissao, "tecnico") == 0 || strcmp(profissao, "Tecnico") == 0){
        novoSalario=salario+(salario*30/100);
    }else{
        novoSalario=salario+(salario*5/100);
    }

    cout << "\n\nO salario antigo eh: " << salario;
    cout << "\nO novo salario eh: " << novoSalario;
    cout << "\nA diferenca de salario eh: " << novoSalario-salario << endl;

    system("pause");

return 0;
}
