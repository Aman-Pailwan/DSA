#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 11;
    int cnt = 0;
    // Brute force Approach with T. C O(N)
    // for(int i = 1 ; i <= n ; i++){
    //     if(n % i == 0){
    //         cnt++;
    //     }
    // } 

    // Sqrt Approach T.C O (sqrt(N))
    for(int i = 1 ; i *i <= n ; i++){
        if(n % i == 0){
            cnt++;
            if((n/i) != i){
                cnt++;
            }
        }
    }
    if(cnt == 2){
        cout << "Its A Prime Number";
    }else{
        cout<< "Its not a prime number";
    }
}