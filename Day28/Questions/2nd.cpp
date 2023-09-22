// Painter's Partition Problem


bool isPossible(vector<int> boards, int n, int k , int mid){
    int painterCount = 1;
    int lenghtSum = 0;
    
    for(int i = 0; i<n ; i++){
        if(lenghtSum + boards[i] <= mid){
            lenghtSum = lenghtSum + boards[i];
        }
        else{
            painterCount++;
            if(painterCount > k || boards[i] > mid ){
                return false;
            }
            lenghtSum = boards[i];
        }
    }
    return true;
}


int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int s = 0;
    int sum = 0;
    int n = boards.size();

    for(int i = 0 ; i< n ; i++){
        sum += boards[i];
    }
    int e = sum;
    
    int ans = -1;
    
    int mid = s + (e -s)/2;
    
    if(n<k){
        return -1;
    }

    while(s<=e){
        
        if(isPossible(boards,n,k,mid)){
            ans = mid;
            e = mid -1;
        }
        
        else{
            s = mid + 1;
        }
        mid = s + ( e - s )/2;
        
    }
    return ans;
}