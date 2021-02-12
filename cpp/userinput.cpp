#include <iostream>
#include <string>
using namespace std;

int main() 
{
    //define mystr as a string type
    string mystr;
    //print to console to input name, and get entire phrase input and store as var mystr.
    cout << "What's your name?";
    getline(cin, mystr);
    cout << "Your name is " << mystr;
    return 0;
}
