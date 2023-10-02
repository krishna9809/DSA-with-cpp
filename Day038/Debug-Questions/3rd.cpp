// Debug the code. It tries to remove duplicates from the given string.

// #include <bits/stdc++.h>
// using namespace std;

// char *removeDuplicate(char str[], int n) {
//   // str is character array and n is the lenght of the character array
// 	int index = 0;
// 	for (int i=0; i<n; i++) {
// 		int j;
// 		for (j=0; j<i; j++)
// 			if (str[i] == str[j])
// 				str[index++] = str[i];
// 		}
		
// 	return str;
// }

#include <bits/stdc++.h>
using namespace std;

char *removeDuplicate(char str[], int n) {
  // str is character array and n is the lenght of the character array
	int index = 0;
	for (int i=0; i<n; i++) {
		int j;
		for (j=0; j<i; j++)
			if (str[i] == str[j]){
            break;
            }

			if(i==j) {str[index++] = str[j];}
		}
		
	return str;
}

int main(){
    char str[] = "krishnaaa";
    int n = strlen(str);

    cout<<removeDuplicate(str,n)<<endl;
}