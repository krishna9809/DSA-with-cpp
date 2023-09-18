// Insertion Sort

#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> arr = {2,5,3,1,9,6,7,8};

  int n = arr.size();

  for(int i = 0 ; i < n ; i++){
    // step 1 fetch
    int val = arr[i];
    // step 2 Compare
    int j = i - 1;
    for(; j>=0;j--){
        if(arr[j] > val){
            //step 3: shift
            arr[j+1] = arr[j];
        }
        else{
            break;
        }
    }
    //step 4: Copy

    arr[j+1] = val;
  }

  for(int i = 0; i< n; i++){
    cout<< arr[i]<<" ";
}




}