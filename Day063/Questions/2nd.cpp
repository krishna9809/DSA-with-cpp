#include<iostream>
#include<vector>
using namespace std;

bool checkSorted(vector<int> &arr, int& n, int i ){
    if(i==n-1){
        return true;
    }

    if(arr[i+1] < arr[i]){
        return false;
    }

    return checkSorted(arr,n,i+1);
}

int main()
{
    vector<int> arr{1,2,8,3,4,5,6};
    int n = 7;
    int i = 0;
    if(checkSorted(arr,n,i)){
        cout<<"Array is Sorted"<<endl;
    }

    else{
        cout<<"Array is Not Sorted"<<endl;
    }
}