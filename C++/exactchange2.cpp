//
// Created by Thanh Hun on 09-Dec-19.
//

#include <iostream>

using namespace std;
int d[20000];
int c[101];

int main() {
    int cases;
    cin >> cases;
    for (int a = 0; a < cases; a++) {
        int price;
        cin >> price;

        int bill;
        cin >> bill;
        for (int &k : d) {
            k = 0;
        }
        d[0] = 1;
        for (int j = 0; j < bill; j++) {
            cin >> c[j];
        }

        for (int i = 0; i < bill; i++) {
            for (int j = 19999 - c[i]; j >= 0; j--) {
                int nc = d[j];
                if (nc > 0) {
                    if (d[j + c[i]] == 0 || nc + 1 < d[j + c[i]]) {
                        d[j + c[i]] = nc + 1;
                    }
                }
            }
        }
        for (int i = price;; ++i) {
            if (d[i] > 0) {
                printf("%d %d\n", i, d[i] - 1);
                break;
            }
        }

    }
    return 0;
}