#include <algorithm>
#include <iostream>
#include <list>
#include <numeric>
#include <random>
#include <set>
#include <vector>
 
using namespace std;

//INCOMPLETE

int streetLights(int n, vector<vector<int>> lights) {

    // to store set of range
    set<int> cover = {};
    
    for (int i = 0; i < lights.size(); i++){
        //location lights[i][1] 
        //radius lights[i][2] 
        // l+/-r = cover

        int plus = lights[i][1] + lights[i][2];
        int minus = lights[i][1] - lights[i][2]; 
        cout << i;
    }

    return 0;
}

int main(){

    int b = 10;
    vector<vector<int>> a = {{0,5},{1,3},{5,4},{8,3}};

    streetLights(b,a);

    return 0;
}

// Find minimum lights to light up the entire street, if not able to light up entire street, return -1