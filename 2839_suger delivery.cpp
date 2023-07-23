//
//  2839_suger delivery.cpp
//  coding
//
//  Created by 이지원 on 2023/07/23.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> answer;
    int N;
    cin >> N;
    for(int i = 0;i<=(N/3);i++){
        for(int j = 0;j<=(N/5);j++){
            if((3*i+5*j)==N){
                answer.push_back(i+j);
            }
        }
    }
    if(answer.empty())
        cout << -1 << endl;
    else{
        sort(answer.begin(),answer.end());
        cout << answer[0] << endl;
    }
    return 0;

}
