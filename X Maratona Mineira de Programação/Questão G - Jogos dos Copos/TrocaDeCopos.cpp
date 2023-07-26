#include <iostream>

using namespace std;

void trocaDePosicao(int *copoTrocado1, int *copoTrocado2)
{
    int aux = *copoTrocado1;
    *copoTrocado1 = *copoTrocado2;
    *copoTrocado2 = aux;
}
int main()
{
    int copoAtual = 2, copoTrocado1, copoTrocado2, repeticoes;
    cin >> repeticoes;
    for(int i = 0; i<repeticoes; i++){
        cin >> copoTrocado1;
        cin >> copoTrocado2;
        if(copoAtual == copoTrocado1){
            copoAtual = copoTrocado2;
        }
        else if(copoAtual==copoTrocado2){
            copoAtual = copoTrocado1;
        }
        trocaDePosicao(&copoTrocado1, &copoTrocado2);
    }
    cout << copoAtual << endl;

}
