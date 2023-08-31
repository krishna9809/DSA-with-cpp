// Find number is Even or Odd
#include<iostream>
using namespace std;
bool evenORodd(int n){
    if(n%2==0){
        return 1;
    }
    return 0;
}
int main()
{   
    int n;
    cout<<"Enter the number to check it is Even or Odd:"<<endl;
    cin>>n;
    int result = evenORodd(n);
    if(result==1){
        cout<<"No. is Even"<<endl;
    }
    else{
        cout<<"No. is Odd"<<endl;
    }
    return 0;
}