#include <iostream>
using namespace std;

int main(){
	
	char gowno[21];
	cout <<"Podaj ciag znakow (max 20 znakow)" << endl;
	cin.getline(gowno, 21);
	cout << "Wprowadzony ciag znakow:" << gowno << endl;
	return 0;
}