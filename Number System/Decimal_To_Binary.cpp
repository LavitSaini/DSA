#include<iostream>
using namespace std;

void  Decimal_To_Binary(int n){
    int num[30], i = 0;
    while(n > 0){
        num[i] = n % 2;
        i++;
        n = n / 2;
    }

    cout<<"Binary form: ";
     for(int j = i - 1; j >= 0; j--){
        cout<<num[j];
     }
}

int main(){
    int n;
    cout<<"Enter a Decimal Number: ";
    cin>>n;

    Decimal_To_Binary(n);
    return 0;
}