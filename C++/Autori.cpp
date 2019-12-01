#include<iostream>

using namespace std;

int main(){
    string line;
    cin >> line;
    for (char i : line) {
        if (isupper(i))
            /*  Converting uppercase characters to lowercase  */
            cout << i;
    }
    return 0;
}