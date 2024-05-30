#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cout << "Enter Number:- ";
    cin >> n;
    int temp = n;
    int rev = 0;
    while(temp > 0){
    int rem = temp % 10;
    temp = temp / 10;
    rev = (rev * 10) + rem;
    }

    if(rev == n){
        cout << "The Number is Palindrome";
    }else{
        cout << "The number is not Palindrome";
    }
}