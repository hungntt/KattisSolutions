//
// Created by Thanh Hun on 06-Dec-19.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void solve(vector<int> &v, vector<int> costs, int money) {
    vector<int> ans;
    if (v[money] == -2) {
        cout << "Impossible" << endl;
        return;
    }

    if (v[money] == -1) {
        cout << "Ambiguous" << endl;
        return;
    }

    while (money > 0) {
        ans.push_back(v[money] + 1);
        money -= costs[v[money]];
    }
    if(money < 0) {
        cout << "Ambiguous" << endl;
        return;
    }
    sort(ans.begin(), ans.end());
    for (auto i : ans){
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v(32000, -2);
    v[0] = 0;
    int n = 0;
    cin >> n; // num of items in menu

    vector<int> costs(n);

    for (auto& i: costs) {
        cin >> i;
    }

    for (int i = 0; i < n; i++) {
        int cost = costs[i];
        for (int j = 0; j <= 30000; j++) {
            if (v[j] >= 0) { // if current amount of money has a way to create menu
                if (v[j + cost] == -2) {
                    // if adding price of items in menu to be equal to amount of money is empty, let it be i
                    v[j + cost] = i;
                } else {
                    // if adding price of items in menu to be equal to amount of money has a previous way
                    v[j + cost] = -1;
                }
            }
            if (v[j] == -1) {
                // adding same price of items which has more than 1 way to be equal to the amount of money, it'll have more than 1 way too.
                v[j + cost] = -1;
            }
        }
    }

    int q = 0;
    cin >> q; // num of max money
    for (int i = 0; i < q; i++) {
        int money = 0;
        cin >> money;

        solve(v, costs, money);
    }

}