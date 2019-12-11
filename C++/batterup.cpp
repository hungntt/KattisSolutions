//
// Created by Thanh Hun on 09-Dec-19.
//


#include <iostream>
#include <vector>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        int sum = 0;
        int ave = 0;
        int num;n
        cin >> num;
        if (num >= 0) {
            sum += num;
            cout << sum << endl;
            ave++;
        }
        cout << (sum / 2);
    }
}