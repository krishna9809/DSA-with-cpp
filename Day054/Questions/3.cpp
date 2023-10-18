
#include <iostream>
using namespace std;
int main()
{
    int x = 4;
    float y = 5.5;
    // A void pointer
    void* ptr;
    ptr = &x;
    // (int*)ptr - does type casting of void
    // *((int*)ptr) dereferences the type casted
    // void pointer variable.
    cout << "Integer variable is = " << *((int*)ptr)
         << endl;
    ptr = &y;
    cout << "Float variable is = " << *((float*)ptr) << endl;
    return 0;
}