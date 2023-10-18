
// Deallocating a memory pointed by ptr causes
// dangling pointer
 
#include <cstdlib>
#include <iostream>
 
int main()
{
    int* ptr = (int *)malloc(sizeof(int));
 
    // After below free call, ptr becomes a 
    // dangling pointer
    free(ptr); 
     
    // No more  dangling pointer
    ptr = NULL;
}
 