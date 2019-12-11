//
// Created by Thanh Hun on 05-Dec-19.
//

#include <iostream>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    for (int i = 0; i<cases; i++){
        float b;
        cin >> b;
        float p;
        cin >> p;
        printf("%.4f %.4f %.4f", 60*(b-1)/p, 60*b/p, 60*(b+1)/p);
    }
}