// Find the Factorial of a Number

#include<iostream>
using namespace std;
int Fact(int n){
    int factorial = 1;
    if(n==0){
        return 1;
    }
    else{
    for(int i = 2;i<=n;i++){
       factorial = factorial*i;
    } 
    }
    return factorial;
}
int main()
{
    int n;
    cout<<"Enter the number to find factorial: "<<endl;
    cin>>n;
    cout<<"Factorial is "<<Fact(n)<<endl;
    return 0;
}