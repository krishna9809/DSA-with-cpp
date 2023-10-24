// Max in the array using Recursion

#include<iostream>
using namespace std;

void findMax(int arr[],int n,int i,int& maxi){
    if(i >= n){
        return;
    }
    maxi = max(arr[i],maxi);

    findMax(arr,n,i+1,maxi);
}

int main()
{
    int arr[] = {10,20,30,50,200,4,50};
    int n =7;
    int maxi = INT16_MIN;
    int i = 0;
    findMax(arr,n,i,maxi);

    cout<< "maximum number is : "<<maxi<<endl;
}