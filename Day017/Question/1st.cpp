// Pivot Element

#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int> arr){
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e-s)/2;

    while(s<=e){

    if(s == e){
        return s;
    }
     
     if(arr[mid] > arr[mid+1] && mid <= e){
        return mid;
     }

     if(arr[mid-1] > arr[mid] && mid - 1  >= s){
        return mid-1;
     }

     if(arr[s] > arr[mid]){
        e = mid - 1;
     }

     else{
        s = mid +1;
     }
     mid = s + ( e - s )/2;
    }
    return -1;
}


int main()
{
    vector<int> arr{8,9,10,5,6,7};
    cout<<findPivot(arr)<<" is a index of Pivot Element "<<endl;
    return 0;
}