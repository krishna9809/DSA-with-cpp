// Min in the array using Recursion

#include<iostream>
using namespace std;

void findMin(int arr[],int n,int i,int& mini){
    if(i >= n){
        return;
    }
    mini = min(arr[i],mini);

    findMin(arr,n,i+1,mini);
}

int main()
{
    int arr[] = {10,20,30,50,200,4,50};
    int n =7;
    int mini = INT16_MAX;
    int i = 0;
    findMin(arr,n,i,mini);

    cout<< "maximum number is : "<<mini<<endl;
}