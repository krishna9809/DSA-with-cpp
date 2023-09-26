// Numeric Half Pyramid

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the No. of Rows"<<endl;
    cin>>n;

    for(int i = 0; i<n;i++){
        for(int j = 0;j <=i ;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    
    
}