// count the no. of set bit

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the No.: "<<endl;
    cin>>n;

    int ans = 0;
     while(n != 0){
        if(n & 1){
            ans++;
        }
        n  = n >> 1;
     }

     cout<<"No. of Set bit are: "<<ans<<endl;


    
 return 0;
}