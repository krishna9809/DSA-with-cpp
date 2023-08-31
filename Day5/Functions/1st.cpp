#include<iostream>
using namespace std;

void Print_Name(int n){
     for(int i = 0;i<n;i++){
        cout<<"Krishna Sharma"<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    Print_Name(n);
}
