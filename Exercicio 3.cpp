#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double notas[5] , somaNotas = 0, media = 0, desvioAluno[5], desvioAlunoQuadrado[5],
    somaDesvioAlunoQuadrado = 0, variancia = 0, desvioPadrao = 0;

    for(int i=1; i<6; i++){
        cout << "Digite a nota do aluno " << i <<": ";
        cin >> notas[i-1];
        somaNotas += notas[i-1];
    }

    media = somaNotas/5;

    for(int i=1; i<6; i++){
        desvioAluno[i-1] = notas[i-1] - media;
        desvioAlunoQuadrado[i-1] = pow(desvioAluno[i-1],2);
        somaDesvioAlunoQuadrado += desvioAlunoQuadrado[i-1];
    }

    variancia = somaDesvioAlunoQuadrado/5;

    desvioPadrao = sqrt(variancia);

    cout << "\nA variancia eh: " << variancia << endl;
    cout << "\nO desvio padrao eh: " << desvioPadrao << "\n\n";

    system("pause");


return 0;
}
