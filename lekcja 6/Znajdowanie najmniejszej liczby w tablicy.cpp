#include <iostream>
using namespace std;
int main (){
	
	int tablica[10];
	
	
	
	for (int i = 0; i<10; i++){
		cout << "Podaj liczbe nr " << i + 1 <<": "<<endl;
		cin >> tablica[i];
	}
	
	int min = tablica[0];
	
	for (int i = 0; i < 10; i++){
		
		if (tablica[i] < min){
			min = tablica[i];
		}
		
		
	}
	cout << "Najmniejsza wartosc tablicy to: " << min << endl;
	
	
	return 0;
}