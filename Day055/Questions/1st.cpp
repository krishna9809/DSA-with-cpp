// Output Question of Pointers

// 1.
#include<iostream>
using namespace std;
int main()
{
float f = 10.5;
float p = 2.5;
float* ptr = &f;
(*ptr)++;
*ptr = p;
cout<< *ptr <<" "<<f<<" "<<p;
}

// output ==> 2.5 2.5 2.5


//And 11 questions are in Notes Folder
