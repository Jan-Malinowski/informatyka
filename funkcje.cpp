#include <iostream>

//NWD liczb

using namespace std;

int nwd(int a, int b){
	while(a!=b){
		if(a>b){
			a=a-b;
		}
		else{
			b=b-a;
		}
	}
	
	return a;
}

int main(){
	int a,b;
	
	cout << "Podaj a i b ";
	cin >> a >> b;
	
	cout << "NWD = " << nwd(a, b);
	return 0;
}
