#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    cin >> n;
    int rev = 0 ;
    while(n > 0){
        int lastDigit = n % 10;
        n = n /10;
        rev = (rev * 10) + lastDigit;
    }

    cout << rev;
}