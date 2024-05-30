#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n;

    // Loop Method
    // int count = 0;
    // while(n > 0){
    // int lastDigit = n %10;
    // n = n /10;
    // count++;    
    // }

    // Log Method

    int count = (int)log10(n) + 1;

    cout << count;
}