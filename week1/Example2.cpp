#include <iostream>
#include <map>
using namespace std;

int main() {
    // Day -> temperature
    map<string, double> weather = {
        {"Monday", 5.2},
        {"Tuesday", 12.3},
        {"Wednesday", 18.4},
        {"Thursday", 22.1},
        {"Friday", 15.6},
        {"Saturday", 9.8},
        {"Sunday", 25.0}
    };

    // Weather condition per day (S = Sunny, R = Rainy, C = Cloudy)
    map<string, char> condition = {
        {"Monday", 'R'},
        {"Tuesday", 'C'},
        {"Wednesday", 'S'},
        {"Thursday", 'S'},
        {"Friday", 'C'},
        {"Saturday", 'R'},
        {"Sunday", 'S'}
    };

    double total = 0;
    int count = 0;

    cout << "Weather log:\n";
    for (auto &entry : weather) {
        string day = entry.first;
        double temp = entry.second;
        char cond = condition[day];
        cout << day << " -> " << temp << "°C, Condition: " << cond << endl;
        total += temp;
        count++;
    }

    double avg = total / count;
    cout << "\nAverage temperature: " << avg << "°C\n";

    return 0;
}
