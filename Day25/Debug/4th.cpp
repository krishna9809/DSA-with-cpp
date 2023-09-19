// Debug the code. This code tries to implement Bubble Sort.



// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 2; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
// }



#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> arr, int n) {
    for (int i = 1; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
for(int i = 0 ; i< 7;i++){
    cout<<arr[i]<<" ";
}

}

int main()
{
vector<int> arr = { 10 , 3 , 40 , 20 , 50 , 80 , 70};

bubbleSort(arr,7);

}