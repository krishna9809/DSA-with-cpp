// Program with memory leak
#include <bits/stdc++.h>
using namespace std;

// function with memory leak
void func_to_show_mem_leak()
{
	int* ptr = new int(5);

    

	// body
    cout<<"krishna"<<endl;

	// return without deallocating ptr

    delete(ptr);
	return;
}

// driver code
int main()
{

	// Call the function
	// to get the memory leak
	func_to_show_mem_leak();

	return 0;
}
