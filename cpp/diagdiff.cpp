#include <iostream>
#include <vector>

using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int leftDiagSum = 0;
    int rightDiagSum = 0;

    //both length are equal as it is a square matrix
    int length = arr.size();
    for (size_t i = 0; i < length; ++i){
        for (size_t j = 0; j < length; ++j){
            if(i == j){
                leftDiagSum+=arr[i][j];
                cout << "Left Diag SUM: " << leftDiagSum << endl;
            }
            if(i+j==(length-1)){
                rightDiagSum+=arr[i][j];
                cout << "right Diag SUM: " <<  rightDiagSum << endl;
            }
        }
    }
    cout << abs(leftDiagSum-rightDiagSum);
    return abs(leftDiagSum-rightDiagSum);
}

int main(){
    vector<vector<int>> a ={{11,2,4},{4,5,6},{10,8,-12}};
    diagonalDifference(a);
    return 0;
}