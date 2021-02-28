#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isAdmissibleOverpayment(vector<double> prices, vector<string> notes, double x) {
    // general logic
    // 1) determine the individual over/underpayments
    // 2) tabulate sum of all individual over/under payments
    // 3) compare with x, > x returns false, <= x returns true
   
    // individual steps
    // 1a) parse thru string to extract x%, higher/lower/same 
    // 1b) store as x(with +ve to denote higher, -ve to denote lower). i.e higher = (1 + (+0.10)), lower = (1+(-0.05))
    // 1c) tabulate using this x vector the sum of over/underpayments and sum+=
    // 1d) compare sum with x 
    
    vector<double> tabulator = {};
    double sum;

    for (int i = 0; i < prices.size(); i++){
        // check for % then determine higher/lower
        if (notes[i].find("%") != string::npos){
            // find multiplier in this format: 10% = 0.10, 5.2% = 0.052
            double multiplier = stod(notes[i].substr(0,notes[i].find("%")))/100;
            cout << "value before %: "<< multiplier << endl;
            // check if it is "lower than" case, else is higher than
            if (notes[i].find("lower") != string::npos){
                // if lower than, apply negative multiplier
                multiplier = multiplier * -1;
                // general formula for difference, e.g 95 - (1/(-0.05+1)*95) = 5
                double difference = prices[i]-((1/(multiplier+1))*prices[i]);
                tabulator.push_back(difference);
                cout << "difference: " << difference << endl;
            } else {
                double difference = prices[i]-((1/(multiplier+1))*prices[i]);
                tabulator.push_back(difference);
                cout << "difference: " << difference << endl;
            }
        } else {
            tabulator.push_back(0);
        }
    }

    for (int j = 0; j < tabulator.size(); j++){
        sum = sum + tabulator[j];
    }

    cout << "sum: " << sum << endl;
    
    if (sum > x){
        cout << "Exceeded price sensitivity" << endl;
        return false;
    } else {
        cout << "Within price sensitivity" << endl;
        return true;
    }

}

int main(){

    vector<double> a = {48,165};
    vector<string> b = {"20.00% higher than in-store","10.00% lower than in-store"};
    double c = 2;

    isAdmissibleOverpayment(a,b,c);

    return 0;
}
