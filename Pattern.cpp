#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n ; j++){
        cout << "*";
    }
    cout << endl;
}
}
void pattern2(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern3(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout << j;
        }
        cout << endl;
    }
}
void pattern4(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ;j++){
            cout << i;
        }
        cout << endl;
    }
}
void pattern5(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1; j <= n-i+1 ; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern6(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n-i+1 ; j++){
            cout << j;
        }
        cout << endl;
    }
}
void pattern7(int n){
    for(int i = 0 ; i < n ;i++){
        // space
        for(int j = 0 ; j < n - i - 1; j++){
            cout << " ";
        }

        // star
         for(int j = 0 ; j < 2*i + 1; j++){
            cout << "*";
        }
        // space
         for(int j = 0 ; j < n - i - 1; j++){
            cout << " ";
        }
        cout << endl;
    }
}
void pattern8(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i ; j++){
            cout << " ";
        }
        for(int j = 0 ; j < 2 * n - (2 * i + 1);j++){
            cout << "*";
        }

        for(int j = 0 ; j < i ; j++){
            cout << " ";
        }
        cout << endl;
    }
}
int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int n ;
cin >> n;
pattern7(n);
pattern8(n);
}