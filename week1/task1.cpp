#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int main() {
    vector<string> days = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    
    //temperatures
    vector<double> temperatures = {5.2, 12.3, 18.4, 22.1, 15.6, 9.8, 25.0};


    for (size_t i = 0; i < days.size(); i++) {
        cout << days[i] << " -> " << temperatures[i] << "°C : ";
        if (temperatures[i] < 10) {
            cout << "Cold";
        } else if (temperatures[i] <= 20) {
            cout << "Ok";
        } else {
            cout << "Warm";
        }
        cout << endl;
    }

    // warmest day
    string warmestDay = days[0];
    double warmestTemp = temperatures[0];
    for (size_t i = 1; i < days.size(); i++) {
        if (temperatures[i] > warmestTemp) {
            warmestDay = days[i];
            warmestTemp = temperatures[i];
        }
    }

    tuple<string, double> warmest = make_tuple(warmestDay, warmestTemp);

    cout << "\nWarmest day: " << get<0>(warmest) << " with " << get<1>(warmest) << "°C\n";

    return 0;
}
