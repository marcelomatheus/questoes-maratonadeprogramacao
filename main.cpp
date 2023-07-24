#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>

/*
using namespace std;

int main()
{
    vector<int> homens;
    vector<int>::iterator it;
    int qHomens, repeticoes, salto, distancia;

    cin >> repeticoes;
    for(int j = 0; j < repeticoes; j++){
    cin >> qHomens;
    cin >> salto;

    for(int i = 1; i <= qHomens; i++){
        homens.push_back(i);
    }

    it = homens.begin()+salto-1;
    homens.erase(it);
    it = it+1;

    while(homens.size()!=1){
    if(salto<=distance(it,homens.end())){
        advance(it,salto-1);
        if(*it==*homens.end()){
            homens.erase(it);
            it=homens.begin()+salto;
        }
        homens.erase(it);
    }else if(salto>distance(it,homens.end())){
        it = homens.begin()+distance(it,homens.end());
        homens.erase(it);
        }
    }
    cout << "case " << j+1 << ": " << homens.front() << endl;
    homens.clear();

}
    return 0;
}*/
