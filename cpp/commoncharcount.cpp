#include <iostream>
#include <vector>
using namespace std;

int commonCharacterCount(string s1, string s2) {

    int map1[26] = {};
    int map2[26] = {};
    int common_chars = 0;

    for (size_t i = 0; i < s1.size(); i++){
        map1[s1[i]]++;
        cout << s1[i] << ": " << map1[s1[i]] << endl;
    }
    
    cout << "---------------------------" << endl;
    
    for (size_t j = 0; j < s2.size(); j++){
        map2[s2[j]]++;
        cout << s2[j] << ": " << map2[s2[j]] << endl;
    }

    /*for (int k = 0; k < 27; k++){
        common_chars = common_chars + min(map1[s1[k]], map2[s2[k]]);
    }
    cout << "common chars: " << common_chars << endl;
    */
    return common_chars;
}

int main(){
    string a = "test";
    string b = "tester";
    commonCharacterCount(a,b);
}
