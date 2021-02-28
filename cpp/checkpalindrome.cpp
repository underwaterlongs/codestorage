#include <iostream>     // std::cout
using namespace std;

bool checkPalindrome(string inputString) {

    int n = inputString.length();
    string copyStr = inputString;

    for (int i = 0; i < n/2; i++){
        swap(copyStr[i], copyStr[n - i - 1]);
    }

    if (copyStr == inputString) {
        cout << "true"; 
        return true;
    } else{
        cout << "false";
        return false;   
    } 
 
}

int main(){
    checkPalindrome("pneumonoultramicroscopicsilicovolcanoconiosis");
    return 0;
}