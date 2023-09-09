#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter Array Elements: \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int h = arr[0];
    for(int i=0; i<n; i++){
        if(h < arr[i]){
            h = arr[i];
        }
    }

    bool val[h];
    for(int i=0; i<h; i++){
        val[i] = 0;
    }

    for(int i=0; i<n; i++){
        if(arr[i] >= 0){
            val[arr[i]] = 1;
        }
    }

    int ans = -1;
    for(int i=0; i<h; i++){
        if(val[i] == false){
            ans = i;
            break;
        }
    }
    cout<<"Smallest Positive Missing Number is: " <<ans;
    return 0;
}