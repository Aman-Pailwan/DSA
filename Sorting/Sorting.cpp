#include<bits/stdc++.h>
using namespace std;
void selectionSort(int n , vector<int> &arr){
    for(int i = 0 ; i <= n-2 ; i++){
        int mini = i;
        for(int j = i ; j <= n-1 ; j++){
            if(arr[j] < arr[mini]) mini = j;
        }
        swap(arr[mini],arr[i]);
    }
}
void bubble_sort(int n , vector<int> &arr){
    for(int i = n - 1 ; i >= 0 ; i--){
        for(int j = 0 ; j <= i - 1 ; j++){
            if(arr[j] > arr[j+1]) swap(arr[j+1] , arr[j]);
        }
    }
}
int main(){
    vector<int> arr{5,3,1,2,6};
    int n = arr.size();
    bubble_sort(n,arr);

    for(auto it : arr){
        cout << it << endl;
    }
}