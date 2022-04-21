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

int nwd2(int a, int b){
	if(a==b){
		return a;
	}
	else{
		if(a>b){
			return nwd2(a-b, b);
		}
		else{
			return nwd2(a, b-a);
		}
	}
}

int main(){
	int a, b;
	cout << "Podaj liczbe a: ";
	cin >> a;
	cout << "Podaj liczbe b: ";
	cin >> b;
	cout << nwd(a, b) << endl;
	cout << nwd2(a, b);
	
	return 0;
}
