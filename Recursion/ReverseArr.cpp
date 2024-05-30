#include<bits/stdc++.h>
using namespace std;

void rev(int l , int r , int arr[]){
    if(l >= r){
        return;
    }
    swap(arr[l] , arr[r]);
    rev(l+1 , r - 1,arr);
}
void Rev(int i , int arr[] , int n){
    if(i >= n/2){
        return;
    }

    swap(arr[i] , arr[n-i-1]);
    Rev(i+1,arr,n);
}
int main(){
    int arr[5] = {5,4,3,2,1};
    int n = 5;
    Rev(0 ,arr,n);

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
}