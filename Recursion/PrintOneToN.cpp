#include<bits/stdc++.h>
using namespace std;

void PrintLinearly(int i , int n){
    if(i > n){
        return;
    }
    cout << i << endl;
    PrintLinearly(i+1 , n);
}
int main(){
    PrintLinearly(1 , 10); 
}