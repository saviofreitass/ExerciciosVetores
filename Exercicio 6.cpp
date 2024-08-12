#include <iostream>

using namespace std;

void linhaColuna(int &indice, int tam, string desc){
    cout << "Digite a quantidade de " << desc <<" da matriz: ";
    cin >> indice;

    while(indice>tam){
        cout << "\nO tamanho maximo eh: " << tam << ", digite novamente: ";
        cin >> indice;
    }
}

int main(){

    int m, n;

    linhaColuna(m, 20, "linhas");
    linhaColuna(n, 25, "colunas");

    int matriz[m][n], matrizTransposta[n][m], matrizMulti[m][n], matrizAdicao[m][n], matrizAdicionada[m][n];

    for(int i=0; i<m; i++){
        for(int o=0; o<n; o++){
            cout << "Digite o valor para a linha " << i << " coluna " << o << ": ";
            cin >> matriz[i][o];
        }
    }
    inicio:

    int opcao, multi;

    cout << "\nEscolha a opcao que deseja fazer!";
    cout << "\n\n1-Calcular a matriz transposta. \n2-Multiplicar a matriz por um valor que voce deseja.\n";
    cout << "3-Realizar a adicao com uma segunda matriz informada pelo usuario.\n4-Sair\n";
    cin >> opcao;

    system("cls");

    cout<< "Sua matriz inicial: \n";
    for(int i=0; i<m; i++){
        for(int o=0; o<n; o++){
            cout << matriz[i][o] << " ";
        }
        cout << "\n";
    }

    switch(opcao){
    case 1:
        cout<<"\n\nSua matriz transposta\n";
        for(int i=0; i<n; i++){
            for(int o=0; o<m; o++){
                matrizTransposta[i][o] = matriz[o][i];
                cout << matrizTransposta[i][o] << " ";
            }
            cout << "\n";
        }
        goto inicio;
        break;
    case 2:
        cout << "Informe o valor para multiplicar a matriz: ";
        cin >> multi;
        cout << "\nSua matriz multiplicada por " << multi << " \n";
        for(int i=0; i<m; i++){
            for(int o=0; o<n; o++){
                matrizMulti[i][o] = matriz[i][o]*multi;
                cout << matrizMulti[i][o] << " ";
            }
            cout << "\n";
        }
        goto inicio;
        break;
    case 3:
        for(int i=0; i<m; i++){
            for(int o=0; o<n; o++){
                cout << "Digite o valor para a linha " << i << " coluna " << o << " da sua matriz que ira somar: ";
                cin >> matrizAdicao[i][o];
                matrizAdicionada[i][o] = matriz[i][o] + matrizAdicao[i][o];
                }
        }
        system("cls");
        cout<< "Sua matriz inicial: \n";
        for(int i=0; i<m; i++){
            for(int o=0; o<n; o++){
                cout << matriz[i][o] << " ";
            }
            cout << "\n";
        }
        cout << "\n\nSuas matrizes somadas: \n";
        for(int i=0; i<m; i++){
            for(int o=0; o<n; o++){
                cout << matrizAdicionada[i][o] << " ";
            }
            cout << "\n";
        }
        goto inicio;
        break;
    case 4:
        return 0;
    default:
        cout << "\n\nOpcao invalida!\n\n";
        goto inicio;
    }

return 0;
}
