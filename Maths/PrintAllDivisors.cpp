#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 36;
    // Regular Approach T. C - O(N)
    // for(int i = 1 ; i <= n ; i++){
    //     if(n % i == 0){
    //         cout << i << ",";
    //     }
    // }

    vector<int> temp;

    for(int i = 1 ; i <= sqrt(n) ; i++){
        if(n % i == 0){
            temp.push_back(i);
            if((n/i) != i){
                temp.push_back(n/i);
            }
        }
    }
    sort(temp.begin() , temp.end());
    for(auto it : temp){
        cout << it << " ";
    }
}