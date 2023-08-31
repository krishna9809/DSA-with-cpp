// Check num is Prime or Not

#include<iostream>
using namespace std;
bool isPrime(int n){

    for(int i = 2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cout<<"Enter the number to check it is Prime or not:"<<endl;
    cin>>n;
    int result = isPrime(n);
    if(result==1){
        cout<<"No. is Prime"<<endl;
    }
    else{
        cout<<"No. is not Prime"<<endl;
    }

    return 0;
}