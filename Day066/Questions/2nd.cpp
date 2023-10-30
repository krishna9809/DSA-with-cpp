// Time and Space Complexity


// 1. Print Array 
void printArray(int a[], int n){
  if(n==0) return;
  cout<<*a;
  printArray(a+1,n-1);
}

// 2. Factorial 
int fact(int n){
    if(n==1){
        return 1;
    }

    return n * fact(n-1);
}

// 3. Binary Search 

int BS(int arr[], int k ,int s, int e){
    if(s>e){
        return -1;
    }

    int mid = s+e/2;

    if(arr[mid] == k){
        return mid;
    }

    else if(arr[mid] > k){
        return BS(arr,k,s,mid-1);
    }
    else{
        return BS(arr,k,mid+1,e);
    }
}