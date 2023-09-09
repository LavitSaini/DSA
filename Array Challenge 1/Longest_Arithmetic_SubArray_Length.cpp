#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter Array Elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int pd = arr[1] - arr[0];
    // Current Array Length...
    int  cur = 2;
    //Answer...
    int ans = 2;
    
    int j = 2;
    while(j < n){
        if(pd == (arr[j] -arr[j-1])){
            cur++;
        }
        else{
            pd = arr[j] - arr[j-1];
            cur = 2;
        }
        j++;
        ans = max(cur, ans);
    }
    cout<<"Longest Arithmetic Array Length: " <<ans;
    return 0;
}