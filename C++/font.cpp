#include <iostream>

using namespace std;

static int mask = 0b11111111111111111111111111;
int count = 0;
int t;
int s[25];

int words(const string& w){
    int x = 0;
    for (auto i : w){
        x |= 1 << (i - 'a');
    }
    return x;
}

void dfs(int memo, int pos){
    if (memo == mask){
        count++;
    }
    for (int i=pos; i < t ; i++){
        dfs(memo | s[i], i+1);
    }
}
int main() {
    cin >> t;
    for (int i =0; i<t; i++){
        string word;
        cin >> word;
        s[i] = words(word);
    }
    dfs(0,0);
    cout << count << endl;
}