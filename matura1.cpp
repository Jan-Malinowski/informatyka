#include <iostream>

//matura inf_pr_cz2 zadanie 5

using namespace std;

bool pierwsza(int a){
	if(a<2){
		return false;
	}
	
	for(int i=2;i*i <= a; i++){	//i < a/2
		if(a%i==0){
			return false;
		}
	}
	return true;
}

int suma(int a){
	int s =0;
	while(a){
		s+=a%10;
		a/=10;
	}
	return s;
}

int suma_bin(int a){
	int s =0;
	while(a){
		s+=a%2;
		a/=2;
	}
	return s;
}

int main(){
	
	int ile1=0, ile2=0, ile3=0, ile4=0, x=0;
	
	for(int i=2; i<1000; i++){
		if(pierwsza(i) && pierwsza(suma(i)) && pierwsza(suma_bin(i))){
			ile1 += 1;
		}
	}
	
	for(int i=100; i<10000; i++){
		if(pierwsza(i) && pierwsza(suma(i)) && pierwsza(suma_bin(i))){
			ile2 += 1;
		}
	}
	
	for(int i=1000; i<100000; i++){
		if(pierwsza(i) && pierwsza(suma(i)) && pierwsza(suma_bin(i))){
			ile3 += 1;
		}
	}
	cout << ile1 << endl << ile2 << endl << ile3;
	
	for(int i=100; i<10000; i++){
		if(pierwsza(suma(i))){
			ile4 += 1;
		}
	}
	cout << endl << "b) " << ile4;
	
	for(int i=100; i<10000; i++){
		if(pierwsza(i) && pierwsza(suma(i)) && pierwsza(suma_bin(i))){
			x += i;
		}
	}
	if(pierwsza(x)){
		cout << endl << "c: TAK";
	}
	else{
		cout << endl << "c: NIE";
	}
}
