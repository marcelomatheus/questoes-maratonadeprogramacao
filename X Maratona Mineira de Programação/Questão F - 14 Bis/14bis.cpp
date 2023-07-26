#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int linhas, colunas, tamanhoPista = 0, maiorPista = 0, tamanhoPistaLinha = 1;
    cin >> linhas;
    cin >> colunas;
    int matriz[linhas][colunas];
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < linhas; i++){
        tamanhoPista = 1;
        for(int j = 0; j < colunas-1; j++){
            if(matriz[i][j]==matriz[i][j+1] || matriz[i][j]==matriz[i][j+1]+1 || matriz[i][j]==matriz[i][j+1]-1){
                tamanhoPista++;
                if(tamanhoPista>tamanhoPistaLinha)tamanhoPistaLinha = tamanhoPista;
            }else{
                tamanhoPista = 1;
            }
            if(tamanhoPistaLinha > maiorPista) maiorPista = tamanhoPistaLinha;
        }
    }
    for(int j = 0; j < colunas; j++){
    tamanhoPista = 1;
        for(int i = 0; i < linhas-1; i++){
            if(matriz[i][j]==matriz[i+1][j] || matriz[i][j]==matriz[i+1][j]+1 || matriz[i][j]==matriz[i+1][j]-1){
                tamanhoPista++;
                if(tamanhoPista>tamanhoPistaLinha)tamanhoPistaLinha = tamanhoPista;
            }else{
                tamanhoPista = 1;
            }
            if(tamanhoPistaLinha > maiorPista) maiorPista = tamanhoPistaLinha;
        }
    }

    cout << maiorPista << endl;

    return 0;
}
