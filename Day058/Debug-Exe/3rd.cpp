int* foo() {
    int x = 10;
    int* p = &x;
    return p;
}

int main() {
    int* q = foo();
    cout << *q << endl; // Expected output: 10, Actual output: some random value
    return 0;
}


// Solution

int* foo() {
    int* p = new int; // Fix
    *p = 10;
    return p;
}

int main() {
    int *q = foo();
    cout << *q << endl;
    return 0;
}