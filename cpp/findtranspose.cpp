#include <iostream>
#include <vector>
using namespace std;

// INCOMPLETE

vector<vector<int>> createVector(){
    int RR = 8;
    int CC = 5;
    vector<vector<int>> a(RR);
    for (int i = 0; i < RR; i ++){
        a[i].resize(CC);
    } 

    return a;
}

vector<vector<int>> rotateImage(vector<vector<int>> a) {
    
    int rows = 8;
    int cols = 5;

    int ab[8][5];
    int transpose[5][8];

    //compute transpose of matrix 
    for (int i = 0; i < rows; ++i){
        for (int j = 0; i < cols; ++j){
            transpose[j][i] = ab[i][j];
        }
    }

    for (int i = 0; i < cols; ++i){
        for (int j = 0; i < rows; ++j){
            cout << " " << transpose[i][j];
            if (j == rows -1){
                cout << endl << endl;
            }
        }
    }

    return transpose;

    //reverse each row

}


// Transpose and then reverse rows

int main() {
    std::vector<std::vector<int>> ab = createVector();
    rotateImage(ab);

    return 0;
}