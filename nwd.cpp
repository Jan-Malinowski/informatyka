#include <iostream>

using namespace std;

int main(){
	
	int a,b,r;
	cout << "Podaj a: ";
	cin >> a;
	cout <<"Podaj b: ";
	cin >> b;
	
	//wersja z odejmowaniem
	
	while(a!=b){
		if(a>b){
			a=a-b;
		}
		else{
			b=b-a;
		}
	}
	
	cout << "NWD = " << a << endl;
	
	//wersja z dzieleniem
	
	cout << "Podaj a: ";
	cin >> a;
	cout <<"Podaj b: ";
	cin >> b;
	
	while(b!=0){
		r = a%b;
		a = b;
		b = r;
	}
	
	cout << "NWD = " << a;
	
	
	return 0;
}
