#include <iostream>
using namespace std;
int main(){
	
	cout << "Podaj wynik egzaminu (liczba punktow)" << endl;
	
	int punkty;
	cin >> punkty;
	
	if (punkty <=49) {
	
	cout << "ocena: niedostateczna"  <<endl;
    }
	else if ((punkty > 49) && (punkty <=69)) 
	{
	cout << "ocena: dostateczna" << endl;}
	
	else if ((punkty >=70) && (punkty < 85)) 
	{
	cout << "ocena: dobra" << endl;
	}
	else if ((punkty >=85) && (punkty <= 99))
	{
	cout << " ocena: bardzo dobra" << endl;
	}
	else if (punkty == 100)
	{
	cout << "ocena: celujaca" << endl;
	}
	else
	{
	cout << "to nie jest liczba w zakresie 0-100";
	}
	
	return 0;
}