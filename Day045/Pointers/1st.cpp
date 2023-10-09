#include<iostream>
using namespace std;
int main()
{
    // Pointer

    int point = 5;

    cout<<&point<<endl;

    // Create

    int k = 5;
    int* add = &k;

    cout<<&add<<endl;

    // Deference
    int h = 6;
    int* addr = &h;

    cout<<*addr<<endl;

    string food = "Pizza";
string* ptr = &food;

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Access the memory address of food and output its value (Pizza)
cout << *ptr << "\n";

// Change the value of the pointer
*ptr = "Hamburger";

// Output the new value of the pointer (Hamburger)
cout << *ptr << "\n";

// Output the new value of the food variable (Hamburger)
cout << food << "\n";
}