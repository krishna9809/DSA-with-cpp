// Write a Function to add 2 Numbers

#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    cout<<"Enter two no. for addition"<<endl;
    cin>>a>>b;
    int sum = add(a,b);
    cout<<"Addition of "<<a <<" and "<<b <<" is "<<sum<<endl;
}