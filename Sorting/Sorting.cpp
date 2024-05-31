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
int main(){
    vector<int> arr{5,3,1,2,6};
    int n = arr.size();
    selectionSort(n,arr);

    for(auto it : arr){
        cout << it << endl;
    }
}