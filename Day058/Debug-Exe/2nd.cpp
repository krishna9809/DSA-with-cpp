int main() {
    int* p = NULL;
    *p = 42;
    return 0;
}


// Solution
int main() {
    int* p = new int;
    *p = 42;
    delete p;
    return 0;
}