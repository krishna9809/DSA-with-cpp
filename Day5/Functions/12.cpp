// Print all Prime number from 1 to n

#include<iostream>
using namespace std;
bool Prime(int n){
  if(n==0){
    return 0;
  }
  else if(n==1){
    return 1;
  }
  else{
    for(int i = 2;i<n;i++){
         if(n%i==0){
            return 0;
         }
    }
    return 1;
}}

int main()
{
    int n;
    cout<<"Enter the range: "<<endl;
    cin>>n;
    for(int i = 1 ; i <=n;i++){
        bool result = Prime(i);

        if (result == 1){
            cout<<i<<endl;
        }
        else{
            continue;
        }
    }

    return 0;
}