// Left Rotate an array by one element (coding ninja)

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{10,20,30,40,4,5,3,5,3,22,7,13,12,3,4};
    int n = arr.size();
     int temp = arr[0];

        for(int i = 0 ; i<n; i++){
            arr[i] = arr[i+1]; 
        }
        arr[n-1] = temp;

    for(int i = 0 ; i< n;i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;
        
}