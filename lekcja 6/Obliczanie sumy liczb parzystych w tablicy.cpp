#include <iostream>
using namespace std;
int main (){
int suma = 0;


	int tablica[10];
	
	for (int i = 0; i < 10; i++){
		
		cout << "Podaj liczbe nr " << i + 1 <<": " << endl;
		cin >> tablica[i];
	}
	cout << "liczby parzyste:" << endl;
	for (int i = 0; i < 10; i++){
		
		if(tablica[i] % 2 ==0){
			
			cout << tablica[i] <<", ";
		}
			
	}
	
	for (int i = 0; i <10; i++){
		
		if(tablica[i] % 2 == 0){
			suma+=tablica[i];
			
		}
	
	
	}
	cout << endl <<"suma liczb przystych wynosi: "<< suma;
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
