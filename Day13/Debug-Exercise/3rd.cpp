// This code tries to move all negative numbers to one side but have some errors, can you spot those errors. Hint: Incomplete conditions applied.

#include<iostream>
using namespace std;
void moveNegative(int arr[], int n){
    int i=0, j=n-1;
    while(i<j){
        if(arr[i]<0){ // swap when a positive element is encountered
            i++;
        }
        if(arr[j]>0){ // swap when a negative element is encountered
            j--;
        }
        swap(arr[i], arr[j]); // swap the elements
    }
}
int main(){
    int n = 5;
    int arr[n] = {2, -3, -1, 5, -4};
    moveNegative(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}