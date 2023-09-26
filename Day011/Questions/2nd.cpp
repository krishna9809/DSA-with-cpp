// Sort Zeroes and Ones

#include<iostream>
#include<vector>
using namespace std;

// void sortZeroAndOnes(vector<int> arr){
//     int start = 0;
//     int end = arr.size() - 1;
//     int i = 0;

//     while(i != end){
//         if(arr[i] == 0){
//             swap(arr[start],arr[i]);
//             start++;
//             i++;
//         }
//         else{
//             swap(arr[end],arr[i]);
//             end--;
//         }
//     }
// } 

int main()
{
    vector<int> arr{0,0,1,0,1,0,1,1,1,0,1,0,1,1,0};
    // sortZeroAndOnes(arr);



int start = 0;
    int end = arr.size() - 1;
    int i = 0;

    while(i != end){
        if(arr[i] == 0){
            swap(arr[start],arr[i]);
            start++;
            i++;
        }
        else{
            swap(arr[end],arr[i]);
            end--;
        }
    }

    for(int i = 0 ; i< arr.size();i++){
        cout<<arr[i]<<" ";
    }
}