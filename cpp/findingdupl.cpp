#include <iostream>
#include <vector>
#include <set>
using namespace std;

/*
int firstDuplicate(vector<int> arr){

    int min = -1;
    set<int> myset;

    int length = arr.size();

    for (int i = length - 1; i >= 0; i--){
        if (myset.find(arr[i]) != myset.end()){
            min = i;
        } else {
            myset.insert(arr[i]);
        }
    } 

    if (min != -1){
        cout << "First repeating element: " << arr[min];
    }  else {
        cout << "No repeating element";
    }

    return 0;
}

*/


//Solution 2
int firstDuplicate(std::vector<int> arr){

    // return -1 if none found
    int duplicate = -1;

    for (int i = 0; i < arr.size(); i++){

        //hold current number and its abs val
        int currentNum = arr[i];
        cout << currentNum << endl;
        int absCurr = abs(currentNum) - 1 ;
        cout << absCurr << endl;

        //check if slot indexed by currentNum is positive
        //if so, it is not a duplicate, and we flip it negative
        //otherwise, it is a duplicate
        if (arr[absCurr] > 0) {
            arr[absCurr] = arr[absCurr] * -1;
        } else {
            return abs(arr[i]);
        }
    } 
    return duplicate;
}

int main() 
{
    std::vector<int> a = {2,3,5,1000,6,2,3,4};
    std::vector<int> b = {5,5,7,8};
    std::vector<int> c = {11,1,101,9};
    std::vector<int> d = {5,2,3,6,6};
    std::vector<int> e = {2,9,10,17,121,999};

    int duplval = firstDuplicate(a);

    cout << "Duplicate Value: " << duplval << endl;

    return 0; 
}
