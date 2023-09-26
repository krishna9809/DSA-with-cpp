// Lowercase to Uppercase

#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

void lowerToUpper(char arr[]){
    int n = strlen(arr);

    for(int i = 0; i<n;i++){
        arr[i] = arr[i] - 'a' + 'A';
    }

}
int main()
{
    char arr[100] = "krishna";
    lowerToUpper(arr);

    cout<<arr<<endl;
 }