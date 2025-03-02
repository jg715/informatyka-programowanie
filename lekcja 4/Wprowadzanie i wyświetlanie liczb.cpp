#include <iostream>
using namespace std;

int main() {
    int liczba;
    char x;

    do {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        cout << "Wprowadziles liczbe: " << liczba << endl;
        
        cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n): ";
        cin >> x;

    } while (x == 't' || x == 'T');

    cout << "Dziekuje za wprowadzenie liczb!" << endl;

    return 0;
}
