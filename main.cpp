#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
    vector<int> homens;
    vector<int>::iterator it;
    int qHomens, repeticoes, k, distancia, p = 0;

    cin >> repeticoes;
    for(int j = 0; j < repeticoes; j++){
        cin >> qHomens;
        cin >> k;

        for(int i = 1; i <= qHomens; i++){
            homens.push_back(i);
        }

        while(homens.size()!=1){
            if(k<distance(it,homens.end())){
                p = p + (k-1);
                for(int i = 0; i<homens.size(); i++){
                    cout << homens[i] << " ";
                    it = homens.begin()+p;
                    homens.erase(it);
                }
                cout << endl;
            }else if(k==distance(it,homens.end())){
                p = k;
                it = homens.begin()+p;
                homens.erase(it);
                it = homens.end();
            }else{
                p = p % homens.size();
                for(int i = 0; i<homens.size(); i++){
                    cout << homens[i] << " ";
                }
                it = homens.begin()+p;
                homens.erase(it);
            }
        }
        cout << "case " << j+1 << ": " << homens.front() << endl;
        homens.clear();
    }
    return 0;
}
