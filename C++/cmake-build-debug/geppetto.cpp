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

    bool ok = 1;
    for (auto v: E[x])
        if (uzeo[v]) ok = 0;

    if (ok) {
        uzeo[x] = 1;
        ret += calc(x + 1);
        uzeo[x] = false;
    }

    return ret;
}

int main() {
    cin >> n, m;
    for (int i = 0; i < m; ++i) {
        int x, y;
        scanf("%d%d", &x, &y);
        --x;
        --y;
        E[x].push_back(y);
        E[y].push_back(x);
    }

    printf("%d\n", calc(0));
    return 0;
}