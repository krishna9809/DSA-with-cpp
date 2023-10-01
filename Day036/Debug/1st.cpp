// void reverseWords(string s)
// {
//     vector<string> tmp;
//     string str = "";
//     for (int i = 0; s[i] != '\0'; i++) {
//         if (s[i] == ' ') {
//             tmp.push_back(str);
//             str = "";
//         }
//         else
//             str += s[i];
//     }
//     tmp.push_back(str);
//  return str;
// }

#include<iostream>
#include<vector>
using namespace std;

void reverseWords(string s)
{
    vector<string> tmp;
    string str = "";
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            tmp.push_back(str);
            str = "";
        }
        else
            str += s[i];
    }
     
}

int main(){
    string s = "hello";
    reverseWords(s);
}