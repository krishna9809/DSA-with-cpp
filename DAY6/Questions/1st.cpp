// Print digit of a number

#include<iostream>
using namespace std;

void printDigit(int n){
    
    while(n!=0){
        int digit = n%10;
        cout<<digit<<endl;
        n = n/10;
    }
    
}

int main(){
    int n;
    cout<<"Enter the digit"<<endl;
    cin>>n;

    printDigit(n);
}