#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n) {
	vector<bool> prime(n,true);
	for (int p = 2; p * p <= n; p++) {
		if (prime[p] == false) {
			for (int i = p * p; i <= n; i += p)
				prime[i] = true;
		}
	}

	for (int p = 2; p <= n; p++)
		if (prime[p])
			cout << p << " ";
}

int main() {
	int n = 50;
	SieveOfEratosthenes(n);
	return 0;
}







/// Solution
#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n) {
	vector<bool> prime(n,true);
	for (int p = 2; p * p <= n; p++) {
		if (prime[p] == true) {
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}

	for (int p = 2; p <= n; p++)
		if (prime[p])
			cout << p << " ";
}

int main()
{
	int n = 50;
	SieveOfEratosthenes(n);
	return 0;
}