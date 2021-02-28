#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool almostIncreasingSequence(vector<int> sequence) {

    bool available = true;
    int last = sequence.size() - 1;

    for(int i = 1; i < last; i++){
        if (sequence[i] <= sequence[i-1]){
            if (!available) return false;
            if (i == last) return true;
            if (i > 1){
                bool ok = (sequence[i-2] < sequence[i-1] && sequence[i-1] < sequence[i+1]) || (sequence[i-2] < sequence[i] && sequence[i] < sequence[i+1]);
                if (!ok) return false;
            }
            available = false;
        }
    }

    return true;

}

int main(){
    vector<int> a = {1,3,2};
    vector<int> b = {1,4,10,4,2};
    vector<int> c = {5,2,3,4};
    vector<int> d = {1,3,2,1};
    vector<int> e = {1,1,1,2,3};
    vector<int> f = {0,-2,5,6};
    vector<int> g = {1,2,3,4,3,6};
    vector<int> h = {1,2,5,5,5};
    vector<int> i = {123,-17,-5,1,2,3,12,43,45};
    vector<int> j = {3,5,67,98,3};

    almostIncreasingSequence(c);
    return 0;
}
 