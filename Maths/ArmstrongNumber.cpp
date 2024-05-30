#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    n = 1634;
    int dup = n;
    int sum = 0;
    int cntDigits = log10(n) + 1;
    while(n > 0){
        int lastDigit = n % 10;
        sum = sum + pow(lastDigit , cntDigits);
        n = n / 10;
    }

    cout << sum;
}