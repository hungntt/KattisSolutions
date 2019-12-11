#include <cstdio>
#include <vector>
#include <iostream>


using namespace std;

const int MAXN = 21;

int n, m;
bool uzeo[MAXN];
vector<int> E[MAXN];

int calc(int x) {
    if (x == n) return 1;
    int ret = calc(x + 1);

    bool ok = true;
    for (auto v: E[x])
        if (uzeo[v]) ok = false;

    if (ok) {
        uzeo[x] = true;
        ret += calc(x + 1);
        uzeo[x] = false;
    }

    return ret;
}

int main() {
    for (int i = 0; i < m; ++i) {
        int x = 0, y = 0;
        cin >> x >> y;
        --x;
        --y;
        E[x].push_back(y);
        E[y].push_back(x);
    }
    cout << calc(0);
    return 0;
}