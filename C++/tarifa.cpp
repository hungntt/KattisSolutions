//
// Created by Thanh Hun on 07-Dec-19.
//

#import <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;
    int m;
    cin >> m;
    int sum = 0;
    int xsum = x * (m+1);
    for (int i = 0; i<m; i++){
        int j;
        cin >> j;
        sum += j;
    }
    cout << (xsum-sum);
}