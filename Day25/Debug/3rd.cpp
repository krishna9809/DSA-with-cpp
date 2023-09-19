// Debug the code. This code tries to implement Selection Sort.

// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int minIndex = i;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[minIndex])
//                 minIndex = j;
//         }
//         int temp = arr[minIndex];
//         arr[minIndex] = arr[j];
//         arr[j] = temp;
//     }
// }
#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        int j = i + 1;
        for (; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i],arr[minIndex]);
    }

    for(int i = 0 ; i< 7;i++){
    cout<<arr[i]<<" ";
}
}


int main()
{
vector<int> arr = { 10 , 3 , 40 , 20 , 50 , 80 , 70};

selectionSort(arr,7);



}