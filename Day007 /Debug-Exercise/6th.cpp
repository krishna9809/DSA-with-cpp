// Convert given Binary number to Decimal.

// int binaryToDecimal(int b){
//     int ans;
//     int c=0;
//     while(b){
//         ans=(b % 10) * (1 << c++);
//         b/=10;
//     }
//     return ans;
// }

int binaryToDecimal(int b){
    int ans;
    int c=0;
    while(b){
        ans=ans +(b % 1) * (1 << c++);
        b/=10;
    }
    return ans;
}