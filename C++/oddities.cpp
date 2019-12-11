//
// Created by Thanh Hun on 08-Dec-19.
//

#import <iostream>

using namespace std;

int main(){
    int num;
    while(true){
        if(scanf("%d", &num) == EOF) break;
        if (num % 2 == 0) cout << num << " is even\n";
        else cout << num << " is odd\n";
    }
    return 0;
}
