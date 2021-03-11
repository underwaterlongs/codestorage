#include <iostream>
#include <vector>
#include <set>

using namespace std;

int commonCharacterCount(string s1, string s2) {

    int map1[256] = {};
    // hold 256 values for any 8-bit char
    // lowercase a-z: 97-122, 65-90 for upper
    int map2[256] = {};
    set<int> abc = {};
    int common_chars = 0;

    for (size_t i = 0; i < s1.size(); i++){
        unsigned char uc = (unsigned char) (s1[i]);
        map1[uc]++;
        abc.insert(uc);
        //cout << s1[i] << ": " << map1[uc] << endl;
    }
    
    cout << "---------------------------" << endl;
    
    for (size_t j = 0; j < s2.size(); j++){
        unsigned char uc2 = (unsigned char) (s2[j]);
        map2[uc2]++;
        abc.insert(uc2);
        //cout << s2[j] << ": " << map2[uc2] << endl;
    }

    for (auto it = abc.begin(); it != abc.end(); ++it){
        common_chars = common_chars + min(map1[*it], map2[*it]);
    }    

    cout << "common chars: " << common_chars << endl;
    return common_chars;
}

int main(){
    string a = "aabcc";
    string b = "adcaa";
    commonCharacterCount(a,b);
}
