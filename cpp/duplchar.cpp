#include <iostream>     // std::cout
#include <algorithm>    // std::count
#include <vector>       // std::vector
using namespace std;


/* Slow answer
char firstNotRepeatingCharacter(string s) {

    int strlen = s.length();
    bool duplExist = false;
    int duplIndex;

    vector<int> vect;

    for (int i=0; i < strlen; i++){
        int mycount = std::count (s.begin(), s.end(), s[i]);
        vect.push_back(mycount);
    }

    for (int i = 0; i < vect.size(); i++) {
        if (vect[i] == 1){
            duplExist = false;
            duplIndex = i;
            break;
        } else {
            duplExist = true;
        }
    }

    if (duplExist == false) {
        cout << "SDUPL: " << s[duplIndex] << endl;
    } else {
        cout << "_" << endl;
    }

    return 0; 
}
*/

// Fast answer

char firstNotRepeatingCharacter(string s) {

    //Initialize a character array;
    int arr[128];

    //Fill char array only lower case
    for (int i=97; i<128; i++){
        arr[i] = -1;
    }

    //cast s[i] as int and account for it 
    for (int i=0; i < s.length(); i++) {
        // create an array of integers indexing the char, add 1 for each count, starting from -1 + 1 = 0 as first count.
        // subsequent counts = 0 + 1, 1+1...
        arr[ (int)s[i] ] += 1;
    }

    for (int i=0; i < s.length(); i++){
        // check if the array of integers denoting the index of chars = 0, if so then it is first count and print.
        if ( arr[(int)s[i] ] == 0){
            cout << s[i];
            return s[i];

        }
    }

    //default: return _
    return '_';
    cout << '_';

}

int main(){
    
    string str = "abaczabadeabacaba";
    firstNotRepeatingCharacter(str);
    return 0;

}

