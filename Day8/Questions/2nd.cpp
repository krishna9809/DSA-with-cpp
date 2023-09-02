// Count 0's and 1's in Array
#include<iostream>
using namespace std;
int main()
{
    int arr[25] = {0,1,2,1,0,4,1,1,0,1,5,1,0,1,3,0,8,1,1,0,0,1,0,0,1};
    int size = 25;
    int zero = 0;
    int one = 0;

    for(int i = 0;i<size;i++){
        if(arr[i]==0){
            zero++;
        }
        else if(arr[i]==1){
            one++;
        }
    }

    cout<<"Numer of Zeros in array: "<<zero<<endl;
    cout<<"Numer of Ones in array: "<<one<<endl;

   
} 