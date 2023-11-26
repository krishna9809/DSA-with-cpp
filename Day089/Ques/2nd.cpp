// Factorial of a Number : Iterative and Recursive

#include <iostream>
using namespace std;
int factorial(int X) {
   int ans = 1;
   for (int i = 1; i <= X; i++) {
      ans = ans * i;
   }
   return ans;
}
int main() {
   int X = 5;
   int result = factorial(X);
   cout << "The factorial of " << X << " is " << result;
}