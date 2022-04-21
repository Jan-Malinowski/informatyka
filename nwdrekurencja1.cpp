#include <iostream>

using namespace std;

int nwd(int a, int b){
	if(b==0){
		return a;
	}
	else{
		return nwd(b, a%b);
	}
}

int main(){
	int a, b;
	cout << "Podaj liczbe a: ";
	cin >> a;
	cout << "Podaj liczbe b: ";
	cin >> b;
	cout << nwd(a, b);
	
	return 0;
}
