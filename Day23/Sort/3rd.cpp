// Bubble Sort with optimization
 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> arr = {2,5,3,1,9,6,7,8};

  int n = arr.size();

  for(int i = 1; i<n;i++){
    bool swapped = false;
    for(int j = 0 ; j < n-i;j++){
    if(arr[j] > arr[j+1]){
        swapped = true;
        swap(arr[j],arr[j+1]);
    }
    }
    if(swapped == false){
        break;
    }
  }



for(int i = 0; i< n; i++){
    cout<< arr[i]<<" ";
}
}