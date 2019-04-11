//
// Created by 阮颖 on 2019/4/2.
//

#include <iostream>
using namespace std;

int main(){
    for (int i = 101; i <= 200; ++i) {
        int judge = 1;
        for (int j = 2; j < i; ++j) {
            if (i % j == 0){
                judge = 0;
                break;
            }
        }
        if (judge == 1)
            cout << i << endl;
    }
}