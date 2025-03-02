#include <iostream>
using namespace std;
int main (){
	
	int tablica[5];
	int zero = 0;
	
	cout << "podaj piec liczb calkowitych" << endl;
	
	for (int i = 0; i < 5; i++){
		
		cin >> tablica[i];
	}
	
	for (int i = 0; i < 5; i++){
		if (tablica[i] < 0){
			tablica[i] = 0;
		}
	}
	cout << "liczby ujemne zamienione na 0: " << endl;
	
		for (int i = 0; i < 5; i++){
			cout << tablica [i];
			
			if (i < 4){
				cout << ",";
			}
		}
	
	
	
	return 0;
}