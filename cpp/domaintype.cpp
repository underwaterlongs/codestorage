#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> domainType(vector<string> domains) {
    
    // check for ellipsis, find substr after ellipsis to vector.end()
    vector<string> dmtype = {".com", ".org", ".net", ".info"};
    vector<string> dmname = {"commercial", "organization", "network", "information"};
    vector<string> dmlabel = {};

    for (size_t i = 0; i < domains.size(); i++) {
        if (domains[i].find_last_of(".") != string::npos){
            // domains[i].find_last_of(".") returns position of last . on string
            // which is then used as the start index for substr till end string to get the . ext
            string ext = domains[i].substr(domains[i].find_last_of("."),domains[i].size());
            for (size_t j = 0; j < dmtype.size(); j++){
                if (ext == dmtype[j]){
                    dmlabel.push_back(dmname[j]);
                }
            }
        }
    }
    cout << dmlabel[3];
    return dmlabel;
}

int main(){

    vector<string> a = {"en.wiki.org", "codesignal.com", "happy.net", "code.info"};
    domainType(a);
    return 0;
}