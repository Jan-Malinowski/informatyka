#include <iostream>

//liczby pierwsze

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



int main(){
	
	for(int i=1; i<200; i++){
		if(pierwsza(i)){
			cout << i << "  ";
		}
	}
	
	return 0;
}
