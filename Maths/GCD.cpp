#include<bits/stdc++.h>
using namespace std;

int main(){
    // Simple
    int n1 = 40 , n2 = 20;
    int gcd = 1;
    // for(int i = 1 ; i <= min(n1,n2) ; i++){
    //     if( n1 % i == 0 && n2 % i == 0){
    //         gcd = i;
    //     }
    // }

    // Somehow Better 
    
    // for(int i = min(n1 , n2) ; i >= 1 ; i--){
    //     if(n1 % i == 0 && n2 % i == 0){
    //         gcd = i;
    //         break;
    //     }
    // }


    // Euclidean Algorithm

    while(n1 > 0 && n2 >0){
        if(n1 > n2) n1 = n1 % n2;
        else n2 = n2 % n1;
    }
    if(n1 == 0) gcd = n2;
    else gcd = n1;

    cout << gcd;
}