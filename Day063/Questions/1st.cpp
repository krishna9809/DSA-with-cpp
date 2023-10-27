#include<iostream>
using namespace std;

void printDigit(int n){
    if(n==0){
        return;
    }

    int newValue = n/10;
    printDigit(newValue);
    int digit = n%10;
    cout<<digit <<" ";
}

int main(){
    int n =674;
    printDigit(n);
}
