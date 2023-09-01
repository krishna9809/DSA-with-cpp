// Print full pyramid like an Equilateral Triangle

// #include <iostream>
// using namespace std;
// int main()
// {
// int k, n;
// cout << "Enter the number of rows : ";
// cin >> n;
// cout << " ";
// for (int i=1; i<=n; i++)
// {

// for (int j=1; j<=n-i; j++)
// cout << " ';

// for (j=1,k=i-1; j<=2*i-1; j++,k--)
// {
// if (1 || j <= k)
// cout << j;
// else
// cout << k;
// }
// cout << endl;

// cout << " ";

// }
// return 0;
// }


#include <iostream>
using namespace std;
int main()
{
int k, n;
cout << "Enter the number of rows : ";
cin >> n;

for (int i=0; i<n; i++)
{

for (int j=0; j<n-i-1; j++){
cout <<"  ";
}

for(int j = 0;j<i+1;j++){
    cout<<j+1<<" ";
}

if(i>=1){
    int count = i;
  for(int j = 0 ; j < i ;j++){
     cout<<count<<" ";
     count = count - 1;
  }
}
cout<<endl;

}
return 0;
}