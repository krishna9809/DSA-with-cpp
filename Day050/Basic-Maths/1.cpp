// 204 Count Prime

class Solution {
public:

   bool isPrime(int i){

       if(i<=1){
           return false;
       }

       
       for(int j = 2;j<i;j++){
           if(i%j==0){
               return false;
           }
       }
       return true;
   }
    int countPrimes(int n) {
        int prime = 0;

        for(int i = 2; i<n;i++){
          
          if(isPrime(i)){
              prime++;
          }
           
        }
        return prime;
    }
};        // Time Limit Execeeded


// Sieve Of Erathosthenes

class Solution {
public:
    int countPrimes(int n) {
        if(n==0||n==1){
            return 0;
        }

        vector<bool> prime(n,true);
        prime[0] = prime[1] = false;

        int ans = 0;

        for(int i = 2; i<n;i++){
            if(prime[i]){
                ans++;

                int j = 2*i;

                while(j<n){
                    prime[j] = false;
                    j = j + i;
                }
            }
        }
        return ans;
    }
};