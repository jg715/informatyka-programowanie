#include <iostream>
using namespace std;
int main(){
	char znak;
	

	
	float liczba1;
	float liczba2;
	
	
	cout << "Podaj pierwsza liczbe" << endl;
	cin >> liczba1;
	cout << "Podaj druga liczbe" << endl;
	cin >> liczba2;
	cout << "Wprowadz znak dzialania";
	cin >> znak;
	
	
	
	float wynik;
	
	
	
	switch(znak){
		
		case '+':
			 wynik = liczba1 + liczba2;
				cout << wynik << endl;
				break;
			
		case '-':
			wynik = liczba1 - liczba2;
				cout << wynik << endl;
				break;
			
		case '*':
			wynik = liczba1*liczba2;
				cout << wynik << endl;
				break;
			
		case '/':
			wynik = liczba1/liczba2;
				cout <<"wynik:" <<wynik << endl;
				break;
			
		
		
	}
	
}