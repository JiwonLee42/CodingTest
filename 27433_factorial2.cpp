//
//  codingPractice.cpp
//  codingtest
//
//  Created by 이지원 on 2023/07/23.
//

#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int sum = 0;
    for(int i = 1;i<=num;i++){
        sum*=num;
    }
    cout << sum;
    return 0;
}
