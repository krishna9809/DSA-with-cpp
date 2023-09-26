// Counting from 1 to n

#include<iostream>
using namespace std;

void counting(int n){
    for(int i = 1;i<=n;i++){
        cout<<i<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    counting(n);
}