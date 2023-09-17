// Selection Sort

#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> arr = {2,5,3,1,9,6,7,8};

  int n = arr.size();

  for(int i = 0 ; i < n-1; i++){
    int min = i;

    for(int j = i +1 ; j< n;j++){
        if(arr[j] < arr[min]){
            min = j;
        }
    }
    swap(arr[i],arr[min]);
  }

for(int i = 0; i< n; i++){
    cout<< arr[i]<<" ";
}
}