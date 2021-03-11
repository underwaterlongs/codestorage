/*Ticket numbers usually consist of an even number of digits. A ticket number is considered lucky if the sum of the first half of the digits is equal to the sum of the second half.

Given a ticket number n, determine if it's lucky or not.

Example

For n = 1230, the output should be
isLucky(n) = true;
For n = 239017, the output should be
isLucky(n) = false.
*/

#include <iostream>
#include <vector>

void collectDigits(std::vector<int>& digits, unsigned long num){

    if (num >= 10){
        collectDigits(digits, num/10);
    }

    digits.push_back(num % 10);
}

bool isLucky(int n) {

    // for an always even number of n digits,
    // tabulate sum of first half, from index 0 to n/2
    // tabulate sum of last half from index n/2 to n
    // if first half == last half, return true
    std::vector<int> digits = {};
    int firstHalf = 0;
    int lastHalf = 0;

    collectDigits(digits, n);
    for (size_t i = 0; i < digits.size(); i++){
        std::cout << digits[i] << std::endl;
    }

    for (size_t j = 0; j < (digits.size()/2); j++){
        firstHalf = firstHalf + digits[j];
    }
    for (size_t k = digits.size()/2; k < (digits.size()); k++){
        lastHalf = lastHalf + digits[k];
    }
    std::cout << (firstHalf == lastHalf);
    return (firstHalf == lastHalf);
}


int main(){
    int test = 134008;
    isLucky(test);
    return 0;
}