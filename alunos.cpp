#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
    int semMudancas = 0,repeticoes,qNotas,nota;
    vector<int> notas;
    vector<int> notasOrdenadas;
    cin >> repeticoes;

    for(int i = 0; i < repeticoes; i++){
        cin>>qNotas;
        for(int i = 0; i < qNotas; i++){
            cin >> nota;
            notas.push_back(nota);
        }
        notasOrdenadas = notas;
        sort(notasOrdenadas.begin(),notasOrdenadas.end(),greater<int>());
        for(int i = 0; i < qNotas; i++){
            if(notas[i]==notasOrdenadas[i]){
                semMudancas++;
            }

        }
        cout << semMudancas << endl;
        semMudancas = 0;
        notas.clear();
        notasOrdenadas.clear();
    }
    return 0;
}
