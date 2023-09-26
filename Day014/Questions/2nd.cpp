// Move all -ve number to left side of an array

#include<iostream>
using namespace std;

void moveNegeative(int arr[], int size){
    int l = 0;
    int h = size -1;

    while(l < h){
        if(arr[l] < 0){
            l++;
        }
        else if(arr[h] > 0){
            h--;
        }
        else{
            swap(arr[l],arr[h]);
            l++;
            h--;
        }
    }

}

int main(){
int arr[6] = {2,3,-4,5,-6,7};

int size = 6;

moveNegeative(arr,6);

for(int i = 0 ; i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
