//
// Created by Thanh Hun on 05-Dec-19.
//
#include <iostream>
using namespace std;
int main(){
    int cases;
    double sum = 0.0;
    double q, y;
    cin >> cases;
    for (int i =0; i<cases; i++){
        cin >> q;
        cin >> y;
        sum += q*y;
    }
    printf("%.3f", sum);
}
