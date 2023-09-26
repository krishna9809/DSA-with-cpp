// Expontial Search

#include<iostream>
using namespace std;

int bs(int a[], int s, int e, int x ){
    int mid = s + ( e - s )/2;

    while(s<=e){
        if(a[mid] == x){
            return mid;
        }
        else if(a[mid] < x){
            s = mid +1;
        }
        else{
            e = mid - 1;
        }
        mid = s + ( e - s )/2;
    }
    return -1;
}

int expSearch(int a[] , int n , int x){

    if(a[0] == x) return 0;
    int i = 1;
    while(i<n && a[i] <= x){
     i = i*2;
    }
    return bs(a,i/2,min(i,n-1),x);
}

int main()
{
    int a[] = {3,4,5,6,7,8,9,10,56,70,90,134,145};

    int n = sizeof(a) / sizeof(int);
    int x = 10;
    int ans = expSearch(a,n,x);

    cout<<ans<<endl;

    return 0;
}