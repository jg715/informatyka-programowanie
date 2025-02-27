#include <iostream>

using namespace std;

int main() {
    double masa_ciala, wzrost, bmi;

    cout << "Podaj mase ciala w kilogramach: ";
    cin >> masa_ciala;
    cout << "Podaj wzrost w metrach: ";
    cin >> wzrost;

    bmi = masa_ciala / (wzrost * wzrost);

    cout << "Twoje BMI wynosi: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Wynik: Niedowaga" << endl;
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "Wynik: W normie" << endl;
    } else if (bmi >= 25 && bmi <= 29.9) {
        cout << "Wynik: Nadwaga" << endl;
    } else {
        cout << "Wynik: Otylosc" << endl;
    }

    return 0;
}


