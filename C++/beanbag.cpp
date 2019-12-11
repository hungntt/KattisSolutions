//
// Created by Thanh Hun on 05-Dec-19.
//
#include <iostream>
#include <vector>

using namespace std;
const int MAXB = 21;
const int MAXT = 102;
int b;
int needed[MAXB];

int t;
vector<int> farms[MAXT];
int main() {
    cin >> b;
    for (int i = 0; i<b; i++){
        cin >> needed[i];
    }

    cin >> t;
    int amt, x;
    for (int i =0; i<t; i++){
        cin >> amt;
        for (int j = 0; j< amt; j++){
            cin >> x;
            farms[i].push_back(x);
        }
    }
}