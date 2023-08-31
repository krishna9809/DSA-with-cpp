// Print Numeric Hollow Inverted Half Pyramid (Click the hyper link to understand the output)

// void main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;++i){
//         for(int j=j+1;j<=n;j++){
//             if(j==i+1 || j == n - i - 1 || i == 0){
//                 cout<<j;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        if (i == 0 || i == n - 1)
        {
            int count = i+1;
            for (int j = 0; j < n - i; j++)
            {
                cout <<count<<" ";
                count++;
            }
        }
            else{
                int count1 = i+1;
                cout<<count1<<" ";
                count1++;
                for(int k = 0 ; k<n-i-2;k++){
                cout<<"  ";
                count1++;
                }
                cout<<count1<<" ";
                count1++;
            }
            cout<<endl;
    
    }
}