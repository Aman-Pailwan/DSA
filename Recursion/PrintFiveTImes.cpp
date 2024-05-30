#include<bits/stdc++.h>
using namespace std;

// T.C O(n)
void printName(int i , int n){
    if(i > n){
        return;
    }
    cout << "Aman" << endl;
    printName(i+1 , n);

}
int main(){
    printName(1 , 5);
}