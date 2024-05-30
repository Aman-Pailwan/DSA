#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int i , string &s){
    int n = s.size();
    if(i >= n/2) return true;
    if(s[i] != s[n-i-1]) return false;
    return isPalindrome(i+1 , s);
}
void revString(int i , string &s){
    int n = s.size();
    if(i >= n/2) return;
    swap(s[i] , s[n-i-1]);
    revString(i+1 , s);

}
int main(){
    string s = "aman";
    revString(0 , s);
    cout << s;
}