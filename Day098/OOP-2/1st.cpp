#include<iostream>
using namespace std;


// Dynamic Memory

class Animal{
    public:
 string name;
 int age;

 //baheviour
 void eat(){
cout<<"Eating"<<endl;
 }

 void sleep(){
cout<<"Sleeping"<<endl;

 }

};

int main()
{

Animal* suresh = new Animal;


// Below variables are allocated memory
// dynamically on heap.
int *ptr1 = new int;
int *ptr2 = new int[10];

// Dynamically allocated memory is
// deallocated 
delete ptr1;
delete [] ptr2;




    return 0;
}