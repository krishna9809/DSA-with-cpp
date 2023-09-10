// Peak Element in Mountain Array (852)

class Solution {
public:

    int findPeak(vector<int> arr){
        int s = 0;
        int e = arr.size() -1;
        int mid = s + ( e - s)/2;

        while(s<e){
            if(arr[mid]< arr[mid+1]){
                s = mid +1;
            }
            else{
                e = mid;
            }
        mid = s + ( e - s)/2;
        }
        return s;
    }
    
    int peakIndexInMountainArray(vector<int>& arr) {

        return findPeak(arr);
    }
};