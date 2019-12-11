#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> ans;
    ans.push_back(5);
    ans.push_back(1);
    ans.push_back(4);
    sort(ans.begin(), ans.end());

    for (auto i: ans){
        cout << i;
    }
    return 0;
}
