#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size -1;

    int mid = start + (end - start)/2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
     mid = start + (end - start)/2;
    }
    return -1;
}

int main()
{
    int arr[10]= {2,5,6,6,8,9,10,33,55,67};
    int size = 10;
    int key = 67;

    int result = binarySearch(arr,size,key);

    if(result != -1){
        cout<<"Index of Key is "<<result<<endl;
    }
    else{
        cout<<"key not found"<<endl;
    }
}