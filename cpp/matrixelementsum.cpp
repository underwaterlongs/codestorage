#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool inExcluded(vector<int> excLst, int toCheck){
    bool result = any_of(excLst.begin(),excLst.end(), [&toCheck](const int num){return num == toCheck;});
    cout << "result: " << result << endl;
    return (result == 1);
}



int matrixElementsSum(vector<vector<int>> matrix) {

    int sum = 0;
    vector<int> exclst = {};

    // check row for 0, and retrieve index of 0 in row
    // exclude index of 0 of previous row in next row calculation

    for (size_t i = 0; i < matrix.size(); i++){
        // check if column j should be x
        // if j is in exclst, exclude
        for (size_t j = 0; j < matrix[0].size(); j++){
             if(inExcluded(exclst, j) == false){
                if (matrix[i][j] == 0){
                    exclst.push_back(j);
                } else {
                    sum += matrix[i][j];
                    cout << "sum: " << sum << endl;
                }
            }
        }
        cout << "----------------" << endl;
    }
    cout << sum << endl;
    return sum;

}

int main(){
    
    vector<vector<int>> a = {{1,1,1,0},{0,5,0,1},{2,1,3,10}};
    matrixElementsSum(a);

    // vector<int> b = {1,2,3};
    // vector<int> c = {1,2,3};
    // bool myVar = toExclude(b,c);    
    return 0;

}