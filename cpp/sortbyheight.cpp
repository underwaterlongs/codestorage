#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool isTree(vector<int> treeLst, int toCheck){
    bool result = any_of(treeLst.begin(),treeLst.end(), [&toCheck](const int num){return num == toCheck;});
    //cout << "result: " << result << endl;
    return (result == 1);
}



vector<int> sortByHeight(vector<int> a) {

    // create a sorted people list [150,160...190]
    // in our for loop, we check for if(original list[index] == -1 aka a tree), we add new list[index] = -1 as well,
    // continue adding people list.
    vector<int> humanLst = {};
    vector<int> treePos = {};
    vector<int> finalLst = {};


    for (size_t i = 0; i < a.size(); i++){
        if (a[i] != -1){
            cout << "human: " << a[i] << endl;
            humanLst.push_back(a[i]);
        } else {
            cout << "tree: " << i << endl;
            treePos.push_back(i);
        }
    }

    sort(humanLst.begin(), humanLst.end());
    int counter = 0;

    for (size_t j = 0; j < a.size(); j++){
        if(isTree(treePos, j) == true){
            finalLst.push_back(-1);
        } else{
            finalLst.push_back(humanLst[counter]);
            counter++;
        }
    }

    for (int k = 0; k < finalLst.size(); k++){
        cout << finalLst[k] << ",";
    }
    return finalLst;

}

int main(){
    vector<int> a = {-1,150,190,170,-1,-1,160,180};
    sortByHeight(a);
    return 0;
}

