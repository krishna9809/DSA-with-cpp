// Binary search in 2d Array

#include<iostream>
#include<vector>
using namespace std;

bool binarySearch(vector<vector<int> > arr, int n, int m, int target){

    int s = 0;
    int e = (n*m) - 1;
    int mid = s + ( e - s )/2;
    
    while(s<=e){
        int rowIndex = mid/m;
        int colIndex = mid%m;
        int element = arr[rowIndex][colIndex];

        if(element == target){
            return true;
        }
        else if(element > target){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    mid = s + ( e - s )/2;

    }
    return false;
}

int main()
{
    vector<vector<int> > arr = {{1,2,3},
                                {4,5,6},
                                {7,8,9}};

    int n = 2;
    int m = 3;
    int target = 10;

    bool result = binarySearch(arr,n,m,target);

    if(result){
        cout<<"Element Found"<<endl;
    }
    else{
        cout<<"Element Not Found"<<endl;
    }

}