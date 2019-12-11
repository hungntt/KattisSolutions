//
// Created by Thanh Hun on 06-Dec-19.
//

#include <iostream>

using namespace std;

void solve(const int data[], int length) {
    int L, lo, hi, mid, newL, k;
    int M[length + 1];
    int P[length];
    int S[length];
    L = 0;
    for (int i = 0; i < length; i++) {
        if (L && data[M[L]] == data[i]) continue;
        lo = 1;
        hi = L;
        while (lo <= hi) {
            mid = (hi + lo) / 2;
            if (data[M[mid]] >= data[i])
                hi = mid - 1;
            else
                lo = mid + 1;
        }
        newL = lo;
        P[i] = M[newL - 1];
        if (newL > L) {
            L = newL;
            M[newL] = i;
        } else if (data[M[newL]] > data[i]) {
            M[newL] = i;
        }
    }
    k = M[L];
    for (int i = L; i >= 1; i--) {
        S[i - 1] = k;
        k = P[k];
    }
    cout << L << endl;
    for (int i = 0; i < L; i++) {
        cout << S[i];
        if (i == (L - 1)) cout << "\n";
        else cout << " ";
    }
}

int main() {
    int num;
    while (true) {
        if(scanf("%d", &num) == EOF) break;
        int data[num];
        for (int i = 0; i < num; i++) {
            cin >> data[i];
        }
        solve(data, num);
    }
    return 0;
}
