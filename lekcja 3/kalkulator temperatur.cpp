#include <iostream>
using namespace std;

int main() {
    double x;
    char wybor;

    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> x;

    cout << "Wybierz jednostke (K - Kelvin, F - Fahrenheit): ";
    cin >> wybor;

    switch(wybor) {
        case 'K':
        case 'k':
            cout << "Temperatura w Kelwinach: " << x + 273.15 << endl;
            break;
        case 'F':
        case 'f':
            cout << "Temperatura w Fahrenheitach: " << (x * 9/5) + 32 << endl;
            break;
        default:
            cout << "Wybierz K lub F" << endl;
    }

    return 0;
}
