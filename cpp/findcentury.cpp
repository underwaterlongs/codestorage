#include <iostream> 
#include <math.h>
using namespace std;

double nearest_hun(int year){

    cout << ceil(year/100.00);
    return 0;

}

int main(){

    int numb = 1901;
    nearest_hun(numb);

    return 0;

}