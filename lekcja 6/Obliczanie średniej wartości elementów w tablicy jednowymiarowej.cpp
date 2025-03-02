#include <iostream>
using namespace std;

int main(){
	
int tablica[5];
int suma = 0;
int srednia = 0;

for (int i = 0; i < 5; i++){
	
	cout << "Podaj liczbe nr" << i + 1 << ": ";
	cin >> tablica[i];
	
	
	
}
	for (int i = 0; i < 5; i++){
		
		suma+=tablica[i];
	}
	
	cout << "srednia liczb wynosi:" << suma/5 << endl;
	
	
	
	return 0;
}