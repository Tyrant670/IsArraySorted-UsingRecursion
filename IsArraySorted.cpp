/**

This Problem is to check wheather the given array is Sorted
             Or not using RECURSION!
              Check it Out !!!
                Code it !

**/
#include<bits/stdc++.h>
using namespace std;

bool IsSorted(int arr[],int n){
    if (n==0 or n==1){
        return true;
    }
    
    if(arr[0]<arr[1] and IsSorted(arr+1 , n-1)){
        return true;
    }

    return false;
}

int main(){
    cout<<"Enter the size of the array which you want to create : "<<endl;
    int n; cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(IsSorted(arr,n)){
        cout<<"The given array is Sorted"<<endl;
    }
    else cout<<"The given array is NOT Sorted"<<endl;
}