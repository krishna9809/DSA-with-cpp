#include<iostream>
using namespace std;

  // Recursive function
  int factorial(int n) {
    if (n == 0) {
      return 1;
    } else {
      return n * factorial(n - 1);
    }
  }

int main() {

  // Print the factorial of 5
  cout << factorial(15) << endl;

  return 0;
}