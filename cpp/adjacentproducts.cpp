#include <iostream>     // std::cout
#include <vector>
#include <algorithm> // std::min_element
using namespace std;

/*
int adjacentElementsProduct(vector<int> inputArray) {
    int maxLength = inputArray.size()-1;
    // store the products in an array
    vector<int> intProducts = {};
    
    for (int i = 0; i < inputArray.size()-1; i++){
        intProducts.push_back(inputArray[i]*inputArray[i+1]);
        cout << intProducts[i] << endl;
    }
    int maxProduct = *max_element(intProducts.begin(), intProducts.end());
    cout << maxProduct;
    return maxProduct;
}
*/

int adjacentElementsProduct(vector<int> inputArray) {
    int maxLength = inputArray.size()-1;
    // store the products in an array
    int intProduct = inputArray[0]*inputArray[1];
    
    for (int i = 0; i < inputArray.size()-1; i++){
        if (inputArray[i]*inputArray[i+1] > intProduct){
            intProduct = inputArray[i]*inputArray[i+1];
            cout << "intProduct: " << intProduct << endl;
        } 

    }

    cout << "Final: " << intProduct << endl;
    return intProduct;

}

/* Faster soln wout creating new vector
int adjacentElementsProduct(std::vector<int> inputArray) {
    int ans = -987654321;
    for (int i = 1; i < inputArray.size(); ++i)
        ans = max(ans, inputArray[i] * inputArray[i - 1]);
    return ans;
}
*/


int main(){

    vector<int> arr = {-1000,10,-10};
    adjacentElementsProduct(arr);
    return 0;
}