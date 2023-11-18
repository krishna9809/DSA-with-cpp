#include<iostream>
using namespace std;

int Part_Index(int *arr,int low,int high){

	int pivot = arr[low];
	int i = low;
	int j = high;

	while(i<j){
		while(arr[i] <= pivot && i<=high-1){
			i++;
		}

		while(arr[j] > pivot && j>=low+1){
			j--;
		}

		if(i<j){
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[low],arr[j]);
	return j;
}


void quickSort(int *arr,int s, int e){
	if(s<e){
     int partitionIndex = Part_Index(arr,s,e);
	 quickSort(arr,s,partitionIndex-1);
	 quickSort(arr,partitionIndex+1,e); 
	}
}

int main()
{
	int arr[] = {2,3,4,1,67,45,23,2};

	int n = 8;
	int s = 0;
	int e = n-1;

    quickSort(arr,s,e);

	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}